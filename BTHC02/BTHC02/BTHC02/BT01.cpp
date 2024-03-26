#include <iostream>
#include <iomanip>

using namespace std;

int Tong(int n)
{
    if (n == 0)
        return 0;
    return n + Tong(n - 1);
}

int sumSquare(int n)
{
    if (n == 1)
        return 1;
    return n * n + sumSquare(n - 1);
}

double sum(int n)
{
    if (n <= 0)
        return 0;
    return 1.0 / n + sum(n - 2);
}

int giaithua(int m)
{
    if (m == 1)
        return 1;
    return m * giaithua(m - 1);
}

int Tonggiaithua(int n)
{
    if (n == 0)
        return 0;
    return giaithua(n) + Tonggiaithua(n - 1);
}

int main()
{
    int k = 0, n = 0;  // Khai báo 'n' ở đây
    bool check = false;
    while (k < 5)
    {
    
        cout << "1. S1 = 1 + 2 + 3 +... +n\n"
            << "2. S2 = 1^2 + 2^2 + 3^2 +... +n^2\n"
            << "3. S3 = 1 + 1/3 + 1/5 +... +1/n\n"
            << "4. S4 = 1! + 2! + 3! +... +n\n"
            << "5. Thoat\n"
            << "Nhap vao bai toan ma ban muon tinh:";
        cin >> k;
        if (check != false) system("cls");
        check = true;
        switch (k)
        {
        case 1:
            cout << "Nhap vao n:\n";
            cin >> n;
            cout << "S1 = " << Tong(n) << endl;
            break;

        case 2:
            cout << "Nhap vao n:";
            cin >> n;
            cout << "S2 = " << sumSquare(n) << endl;
            break;

        case 3:
            cout << "Nhap vao n:";
            cin >> n;
            if (n % 2 == 0)
                cout << "S3 = " << sum(n - 1) << endl;
            else
                cout << "S3 = " << sum(n) << endl;
            break;

        case 4:
            cout << "Nhap vao n:";
            cin >> n;
            cout << "S4 = " << Tonggiaithua(n) << endl;
            break;

        case 5:
            cout << "Thoat chuong trinh.\n";
            break;

        default:
            break;
        }
    }

    return 0;
}
