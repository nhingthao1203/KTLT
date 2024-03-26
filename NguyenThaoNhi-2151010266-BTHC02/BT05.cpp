#include <iostream>
#include <iomanip>

using namespace std;

int countDigits(int num)
{
    if (num < 10)
        return 1;
    else
        return 1 + countDigits(num / 10);
}

int main()
{
    int n = 1;
    while (n > 0)
    {
        cout << "Nhap mot so nguyen khong am (Nhap so am neu muon dung chuong trinh) : ";
        cin >> n;
        if (n < 0)
        {
            cout << "Ban da nhap mot so nguyen khong am. Dung chuong trinh" << endl;
            return 1;
        }
        cout << "So chu so cua so nguyen ban vua nhap la: " << countDigits(n) << endl;
    }
    return 0;
}
