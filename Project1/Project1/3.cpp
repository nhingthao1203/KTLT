#include <iostream>
#include <string>
using namespace std;

struct NTN {
    int ngay, thang, nam;
};

struct Sach {
    string MaSach, TenSach;
    NTN date;
};

void Sort(Sach arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].TenSach > arr[j + 1].TenSach) {
                Sach temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap vao so luong sach: ";
    cin >> n;
    Sach* sach = new Sach[n];

    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Nhap vao MaSach cho sach thu " << i + 1 << ": ";
        getline(cin, sach[i].MaSach);
        cout << "Nhap vao TenSach cho sach thu " << i + 1 << ": ";
        getline(cin, sach[i].TenSach);
        cout << "\nNhap vao NGAY cho sach thu " << i + 1 << ": ";
        cin >> sach[i].date.ngay;
        cout << "\nNhap vao THANG cho sach thu " << i + 1 << ": ";
        cin >> sach[i].date.thang;
        cout << "\nNhap vao NAM cho sach thu " << i + 1 << ": ";
        cin >> sach[i].date.nam;
        cin.ignore();
    }

    Sort(sach, n);

    cout << "\nDanh sach sach da sap xep theo MaSach:\n";
    for (int i = 0; i < n; i++) {
        cout << "MaSach: " << sach[i].MaSach << ", TenSach: " << sach[i].TenSach << ", Ngay: " << sach[i].date.ngay << "/" << sach[i].date.thang << "/" << sach[i].date.nam << endl;
    }

    delete[] sach;
    return 0;
}
