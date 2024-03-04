#include <iostream>

using namespace std;

int fibo(int n);
void fiboIn(int *p, int n);
void fiboOut(int *p, int n);

int main() 
{
    int n, *p;

    do
    {
        cout << "Nhap so nguyen duong >1: ";
        cin >> n;
        if (n < 1)
            cout << "Khong hop le. Nhap lai.\n";
    } while (n < 1);
    p = new int[n];
    
    cout << n << " gia tri dau cua day Fibonacci la: \n";
    fiboIn(p, n);
    fiboOut(p, n);
    delete []p;
    p = NULL;

    system("pause");
    return 0;
}

int fibo(int n)
{
    if (n < 2)
        return n;
    else 
        return fibo(n - 2) + fibo(n - 1);
}
void fiboIn(int *p, int n)
{
    for (int i = 0; i < n; ++i)
    {
        *(p + i) = fibo(i);
    }
}
void fiboOut(int *p, int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
}