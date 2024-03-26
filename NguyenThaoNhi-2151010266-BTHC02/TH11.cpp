#include <iostream>
using namespace std;

const int MAXCOL = 100;
const int MAXROW = 100;

int sumArray(int arr[], int n, int index = 0) {
    if (index == n)
        return 0;
    return arr[index] + sumArray(arr, n, index + 1);
}

int main() {
    int n;

    cout << "Nhap kich thuoc cua mang: ";
    cin >> n;

    if (n > MAXROW) {
        cout << "Kich thuoc vuot qua gioi han." << endl;
        return 1;
    }

    int arr[MAXCOL];

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }

    int total = sumArray(arr, n);
    cout << "Tong cac phan tu cua mang la: " << total << endl;

    return 0;
}
