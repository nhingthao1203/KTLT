#include <iostream>

using namespace std;

int main() 
{
    int a, b, d;
    int *pa = &a, *pb = &b;

    cout << "Nhap 2 so nguyen: ";
    cin >> a >> b;

    while (*pb != 0)
    {
        d = *pa % *pb;
        *pa = *pb;
        *pb = d;
    }
    cout << "UCLN cua 2 so nguyen da nhap la: " << *pa << endl;

    system("pause");
    return 0;
}