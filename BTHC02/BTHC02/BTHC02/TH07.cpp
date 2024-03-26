#include<iostream>

using namespace std;

void sumOnE(int n, int& sumOdd, int& sumEven);

int main()
{
    int n;
    int sumOdd = 0, sumEven = 0;
    cout << "Nhap vao so n:";
    cin >> n;
    sumOnE(n, sumOdd, sumEven);
    return 0;
}

void sumOnE(int n, int& sumOdd, int& sumEven)
{
    if (n <= 0)
    {
        cout << "Tong cac chu so chan: " << sumEven << endl;
        cout << "Tong cac chu so le: " << sumOdd << endl;
    }
    else
    {
        if ((n % 10) % 2 == 0)
        {
            sumEven = sumEven + (n % 10);
        }
        else
        {
            sumOdd = sumOdd + (n % 10);
        }
        sumOnE(n / 10, sumOdd, sumEven);
    }
}
