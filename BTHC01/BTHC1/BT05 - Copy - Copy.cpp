#include <iostream>
#include <ctime>
#include <iomanip>
int const MN = 10;

using namespace std;

int main()
{
    int arr[MN][MN], n;
    int subSum = 0, mainSum = 0;

    do 
    {
        cout << "Nhap cap cua ma tran vuong: ";
        cin >> n;
        if(n > MN || n < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(n > MN || n < 1);

    cout << "Cac phan tu trong mang duoc khoi tao la: \n";
    srand(time(NULL));
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            arr[i][j] = rand() % 10;
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            if(i == j) 
                mainSum += arr[i][j];
            if((i + j) == (n - 1))
                subSum += arr[i][j];
        }
    }

    cout << "Tong cac phan tu tren duong cheo chinh: " << mainSum << ".\n";
    cout << "Tong cac phan tu tren duong cheo phu: " << subSum << ".\n";

    system("pause");
    return 0;
}
