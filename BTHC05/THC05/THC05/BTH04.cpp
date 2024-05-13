#include <iostream>
#include <string>
using namespace std;

struct SanPham
{
    char maSP[11];
    string tenSP;
    double donGia;
    int soLuongTonKho;
};

void nhapSanPham(SanPham& sp)
{
    cout << "Nhap ma san pham (toi da 10 ky tu): ";
    cin.getline(sp.maSP, 11);
    cout << "Nhap ten san pham: ";
    getline(cin, sp.tenSP);
    cout << "Nhap don gia: ";
    cin >> sp.donGia;
    cout << "Nhap so luong ton kho: ";
    cin >> sp.soLuongTonKho;
    cin.ignore();
}

void xuatSanPham(const SanPham& sp)
{
    cout << "Ma san pham: " << sp.maSP << endl;
    cout << "Ten san pham: " << sp.tenSP << endl;
    cout << "Don gia: " << sp.donGia << endl;
    cout << "So luong ton kho: " << sp.soLuongTonKho << endl;
}

void sapXepSanPham(SanPham danhSach[], int soLuong)
{
    for (int i = 0; i < soLuong - 1; ++i)
    {
        for (int j = i + 1; j < soLuong; ++j)
        {
            if (danhSach[i].soLuongTonKho > danhSach[j].soLuongTonKho)
            {
                swap(danhSach[i], danhSach[j]);
            }
        }
    }
}

int main()
{
    int soLuong;
    SanPham* danhSach;

    cout << "Nhap so luong san pham (toi da 30): ";
    cin >> soLuong;
    cin.ignore();

    danhSach = new SanPham[soLuong];

    for (int i = 0; i < soLuong; ++i)
    {
        cout << "\nNhap thong tin cho san pham thu " << i + 1 << ":\n";
        nhapSanPham(danhSach[i]);
    }

    cout << "\nThong tin cua cac san pham vua nhap:\n";
    for (int i = 0; i < soLuong; ++i)
    {
        cout << "\nSan pham thu " << i + 1 << ":\n";
        xuatSanPham(danhSach[i]);
    }

    sapXepSanPham(danhSach, soLuong);

    cout << "\nThong tin cua cac san pham sau khi sap xep:\n";
    for (int i = 0; i < soLuong; ++i)
    {
        cout << "\nSan pham thu " << i + 1 << ":\n";
        xuatSanPham(danhSach[i]);
        cout << "---------------------------\n";

    }

    delete[] danhSach;

    return 0;
}
