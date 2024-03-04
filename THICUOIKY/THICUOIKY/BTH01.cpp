#include <iostream>
#include <ctime>
#include <iomanip>
int const MN = 10;

using namespace std;

int main()
{
    int **arr, n;
    int maxR, minR = 0, maxC, minC = 0;

    do
    {
        cout << "Nhap cap cua ma tran vuong : ";
        cin >> n;
        if (n > MN || n < 2)
            cout << "Khong hop le! Nhap lai.\n";
    } while (n > MN || n < 2);

    arr = new int *[n];
        for (int i = 0; i < n; i++)
            arr[i] = new int [n];
    maxR = n - 1; maxC = n - 1;
    int x = n * n;
    while (x !=0)
    {
        for (int j = maxC; j >= minC; --j)
            (arr[minR][j]) = x--;
        ++minR;
        for (int i = minR; i <= maxR; ++i)
            (arr[i][minC]) = x--;
        ++minC;

        for (int j = minC; j <= maxC; ++j)
            (arr[maxR][j]) = x--;
        --maxR;

        for (int i = maxR; i >= minR; --i)
            (arr[i][maxC]) = x--;
        --maxC;
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
            cout << setw(4) << arr[i][j];
        cout << endl;
    }

    system("pause");
    return 0;
}
