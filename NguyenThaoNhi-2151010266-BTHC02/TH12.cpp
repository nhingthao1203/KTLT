#include <iostream>
using namespace std;

const int MAXCOL = 100;
const int MAXROW = 100;

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];

    int minRest = findMin(arr, n - 1);

    return (minRest < arr[n - 1]) ? minRest : arr[n - 1];
}

int main() {
    int n;

    cout << "Nhap kich thuoc cua mang (toi da " << MAXROW << " phan tu): ";
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

    int minVal = findMin(arr, n);
    cout << "Gia tri nho nhat cua mang la: " << minVal << endl;

    return 0;
}
