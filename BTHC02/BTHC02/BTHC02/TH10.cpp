#include <iostream>
using namespace std;

int USCLN(int a, int b) {
    if (b == 0)
        return a;
    return USCLN(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Nhap vao so nguyen thu nhat: ";
    cin >> num1;
    cout << "Nhap vao so nguyen thu hai: ";
    cin >> num2;
    cout << "Uoc so chung lon nhat cua " << num1 << " va " << num2 << " la: " << USCLN(num1, num2) << endl;
    return 0;
}
