#include <iostream>
#include <iomanip>

using namespace std;

int fibo(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibo(n - 1) + fibo(n - 2);
}

int main()
{
    int n = 1;
    while (true) 
    {
        cout << "Nhap vao n (n > 0) so fibo ma ban muon tim, nhap n <= 0 de thoat: ";
        cin >> n;

        if (n <= 0)
        {
            cout << "Thoat chuong trinh." << endl;
            break; 
        }
        else
        {
            cout << "Fibonacci(" << n << ") = " << fibo(n) << endl;
        }
    }

    return 0;
}
