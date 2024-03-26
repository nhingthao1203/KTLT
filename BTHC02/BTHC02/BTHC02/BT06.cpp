#include <iostream>
#include <iomanip>

using namespace std;

int daoNguoc(int num, int temp)
{
    if (num == 0)
        return temp;
    else
        return daoNguoc(num / 10, temp * 10 + num % 10);
}

int main()
{
    int n = 1;
    while (n > 0)
    {
        cout << "Nhap mot so nguyen khong am: ";
        cin >> n;
        if (n < 0)
        {
            cout << "Vui long nhap so nguyen khong am." << endl;
            return 1;
        }
        int ketqua = daoNguoc(n, 0);
        cout << "Chu so dao nguoc cua so nguyen ban vua nhap la: " << ketqua << endl;
    }
    return 0;
}
