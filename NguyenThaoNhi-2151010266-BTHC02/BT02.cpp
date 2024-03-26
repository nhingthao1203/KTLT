#include <iostream>
#include <iomanip>

using namespace std;

int giaithua(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * giaithua(n - 1);
}

int main()
{
    int n = 1;
    while (n > 0)
    {
        cout << "Nhap vao n (n > 0), nhap n <= 0 de thoat: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "Thoat chuong trinh.\n";
            break;
        }
        else
        {
            cout << giaithua(n) << endl;
        }
    }
    return 0;
}
