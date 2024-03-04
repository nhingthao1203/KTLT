#include <iostream>
#include <ctime>
#include <iomanip>
int const MN = 10;

using namespace std;

void taoMang(int arr[MN][MN], int n);
void xuatMang(int arr[MN][MN], int n);
void tongMang(int arrA[MN][MN], int arrB[MN][MN], int n);
void tichMang(int arrA[MN][MN], int arrB[MN][MN], int n);

int main()
{
    int arrA[MN][MN], arrB[MN][MN], n;

    do 
    {
        cout << "Nhap cap cua ma tran vuong A va B: ";
        cin >> n;
        if(n > MN || n < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(n > MN || n < 1);

    cout << "\nMa tran vuong A cap n la: \n";
    taoMang(arrA, n);
    xuatMang(arrA, n);
    
    cout << "\nMa tran vuong B cap n la: \n";
    taoMang(arrB, n);
    xuatMang(arrB, n);

    cout << "\nTong 2 mang la: \n";
    tongMang(arrA, arrB, n);
    cout << "\nTich 2 mang la: \n";
    tichMang(arrA, arrB, n);

    system("pause");
    return 0;
}

void taoMang(int arr[MN][MN], int n)
{
    srand(time(NULL));
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            arr[i][j] = rand() % 10;
}
void xuatMang(int arr[MN][MN], int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
}
void tongMang(int arrA[MN][MN], int arrB[MN][MN], int n)
{
    int arrSum[MN][MN];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            arrSum[i][j] = arrA[i][j] + arrB[i][j];
    xuatMang(arrSum, n);
}
void tichMang(int arrA[MN][MN], int arrB[MN][MN], int n)
{
    int arrMul[MN][MN] = {0};
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j)
            for(int k = 0; k < n; ++k)
                arrMul[i][j] += (arrA[i][k] * arrB[k][j]);
    xuatMang(arrMul, n);
}