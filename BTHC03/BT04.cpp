#include <iostream>
#include <cstdlib>
int const MS = 30;

using namespace std;

int main() 
{
    int n, maxP = 0;
    int *p;
    
    do
    {
        cout << "Nhap do lon mang: ";
        cin >> n;
        if (n < 0 || n > MS)
            cout << "Khong hop le. Nhap lai.\n";
    } while (n < 0 || n > MS);
    p = new int[n];

    cout << "Mang duoc khoi tao la: \n";
    for (int i = 0; i < n; ++i)
    {
        *(p + i) = rand() % 20;
        cout << *(p + i) << " ";

        if (*(p + i) > *(p + maxP))
            maxP = i;
    }

    cout << "\nCac phan tu le trong mang la: \n";
    for (int i = 0; i < n; ++i)
    {
        if (*(p + i) % 2 != 0)
            cout << *(p + i) << " ";
    }
    cout << "\nDia chi cua phan tu lon nhat trong mang la: " << &maxP << endl;

    delete []p;
    p = NULL;

    system("pause");
    return 0;
}