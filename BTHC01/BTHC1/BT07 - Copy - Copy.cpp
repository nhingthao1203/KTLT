#include <iostream>
#include <ctime>
#include <iomanip>
int const MR = 10, MC = 10;

using namespace std;

void nhapMang(int arr[MR][MC], int aR, int aC);
void xuatMang(int arr[MR][MC], int aR, int aC);
double averageM(int arr[MR][MC], int aR, int aC);
bool findX(int arr[MR][MC], int aR, int aC, int x);
void swapM(int arr[MR][MC], int aR, int aC, int x, int y);
long long mulM(int arr[MR][MC], int aR, int aC, int mulC);

int main()
{
    int arr[MR][MC]; 
    int aR, aC, x, y, mulC;

    do 
    {
        cout << "Nhap so hang cua mang: ";
        cin >> aR;
        cout << "Nhap so cot cua mang: ";
        cin >> aC;
        if(aR > MR || aR < 1 || aC > MC || aC < 1)
            cout << "Nhap sai! Nhap lai.\n";
    } while(aR > MR || aR < 1 || aC > MC || aC < 1);

    nhapMang(arr, aR, aC);
    cout << "Mang duoc khoi tao la: \n";
    xuatMang(arr, aR, aC);
    cout << "\nb. Trung binh cong cac gia tri trong mang la: " << averageM(arr, aR, aC) << endl;

    cout << "\nc. Nhap gia tri can tim trong mang: ";
    cin >> x;
    if(findX(arr, aR, aC, x))
        cout << "Co ton tai so " << x << " trong mang.\n";
    else
        cout << "Khong ton tai so " << x << " trong mang.\n";

    cout << "\nd. Nhap gia tri x va y can doi cho: ";
    cin >> x >> y;
    swapM(arr, aR, aC, x, y);

    cout << "\ne. ";
    do 
    {
        cout << "Nhap cot can tinh tich: ";
        cin >> mulC;
        if(mulC < 1 || mulC > aC)
            cout << "Cot khong hop le. Nhap lai.\n";
    } while(mulC < 1 || mulC > aC);
    cout << "Tich cac phan tu trong cot " << mulC << " la: " << mulM(arr, aR, aC, mulC) << endl;

    system("pause");
    return 0;
}

void nhapMang(int arr[MR][MC], int aR, int aC)
{
    srand(time(NULL));
    for(int i = 0; i < aR; ++i)
        for(int j = 0; j < aC; ++j)
            arr[i][j] = rand()%100;
}
void xuatMang(int arr[MR][MC], int aR, int aC)
{
    for(int i = 0; i < aR; ++i)
    {
        for(int j = 0; j < aC; ++j)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }
}
double averageM(int arr[MR][MC], int aR, int aC)
{
    double aver, sum = 0;
    for(int i = 0; i < aR; ++i)
        for(int j = 0; j < aC; ++j)
            sum += arr[i][j];
    aver = sum / (aR * aC);
    return aver;
}
bool findX(int arr[MR][MC], int aR, int aC, int x)
{
    for(int i = 0; i < aR; ++i)
        for(int j = 0; j < aC; ++j)
            if(arr[i][j] == x)
            {
                return true;
                break;
            }
   return false;
}
void swapM(int arr[MR][MC], int aR, int aC, int x, int y)
{
    if(findX(arr, aR, aC, x) && findX(arr, aR, aC, y))
    {
        int xR, xC, yR,yC;

        for(int i = 0; i < aR; ++i)
            for(int j = 0; j < aC; ++j)
                if(arr[i][j] == x)
                {
                    xR = i; xC = j;
                    break;
                }

        for(int i = 0; i < aR; ++i)
            for(int j = 0; j < aC; ++j)
                if(arr[i][j] == y)
                {
                    yR = i; yC = j;
                    break;
                }
    
        arr[xR][xC] += arr[yR][yC];
        arr[yR][yC] = arr[xR][xC] - arr[yR][yC];
        arr[xR][xC] -= arr[yR][yC];
        cout << "Mang sau khi doi cho: \n";
        xuatMang(arr, aR, aC);
    } else 
        cout << "Khong tim thay gia tri can doi cho.\n";
}
long long mulM(int arr[MR][MC], int aR, int aC, int mulC)
{
    long long mul = 1;
    for(int i = 0; i < aR; ++i)
        mul *= arr[i][mulC];
    return mul;
}