#include <iostream>
#include <ctime>
#include <iomanip>
int const MN = 10;

using namespace std;

int main()
{
    int arr[MN][MN] = {0}, n, x = 1;

    do 
    {
        cout << "Nhap cap cua ma tran vuong : ";
        cin >> n;
        if(n > MN || n < 2)
            cout << "Khong hop le! Nhap lai.\n";
    } while(n > MN || n < 2);

    while(x <= n * n)
    {
        for(int j = 0; j < n; ++j)
            if(j % 2 != 0) //cot chan
                for(int i = n - 1; i >= 0; --i)
                    arr[i][j] = x++;
            else
                for(int i = 0; i < n; ++i)
                    arr[i][j] = x++;
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }

    system("pause");
    return 0;
}
