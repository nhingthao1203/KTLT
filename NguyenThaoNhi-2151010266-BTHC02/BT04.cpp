#include <iostream>

using namespace std;

int power(int x, int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return x * power(x, n - 1);
    else
        return 1.0 / (x * power(x, -n - 1)); 
}

int main()
{
    int x, n;

    cout << "Nhap vao gia tri x: ";
    cin >> x;

    cout << "Nhap vao gia tri n: ";
    cin >> n;

    cout << "Gia tri cua " << x << "^" << n << " la: " << power(x, n) << endl;

    return 0;
}
