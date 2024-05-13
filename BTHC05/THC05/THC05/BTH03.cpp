#include <iostream>
#include <string>
using namespace std;

// Định nghĩa kiểu dữ liệu SinhVien
struct SinhVien
{
    string maSV;
    string hoTen;
    double diemToan;
    double diemVan;
    double diemNN;
};


void nhapSinhVien(SinhVien& sv)
{
    cout << "Nhap ma so sinh vien: ";
    getline(cin, sv.maSV);
    cout << "\nNhap ho ten sinh vien: ";
    getline(cin, sv.hoTen);
    cout << "Nhap diem toan: ";
    cin >> sv.diemToan;
    cout << "\nNhap diem van: ";
    cin >> sv.diemVan;
    cout << "\nNhap diem ngoai ngu: ";
    cin >> sv.diemNN;
    cin.ignore(); 
}


void nhapDanhSachSinhVien(SinhVien danhSach[], int& siSo)
{
    cout << "Nhap si so lop hoc: ";
    cin >> siSo;
    cin.ignore(); // Xóa kí tự dòng mới từ buffer
    for (int i = 0; i < siSo; ++i)
    {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        nhapSinhVien(danhSach[i]);
    }
}


double tinhDiemTrungBinh(const SinhVien& sv)
{
    return ((sv.diemToan + sv.diemVan) * 2 + sv.diemNN) / 5;
}


string xepLoaiSinhVien(double diemTB)
{
    if (diemTB >= 8.0)
        return "Gioi";
    else if (diemTB >= 6.5)
        return "Kha";
    else if (diemTB >= 5.0)
        return "TB";
    else
        return "Duoi TB";
}


void inThongTinSinhVien(const SinhVien& sv)
{
    cout << "\nMa so sinh vien: " << sv.maSV << endl;
    cout << "Ho ten: " << sv.hoTen << endl;
    cout << "Diem toan: " << sv.diemToan << endl;
    cout << "Diem van: " << sv.diemVan << endl;
    cout << "Diem ngoai ngu: " << sv.diemNN << endl;
}


void inDanhSachSinhVien(const SinhVien danhSach[], int siSo)
{
    cout << "\nDanh sach sinh vien:\n";
    cout << "---------------------------\n";
    cout << "STT\tMa SV\tHo Ten\tDiem TB\tXep Loai\n";
    cout << "---------------------------\n";
    for (int i = 0; i < siSo; ++i)
    {
        double diemTB = tinhDiemTrungBinh(danhSach[i]);
        string xepLoai = xepLoaiSinhVien(diemTB);
        cout << i + 1 << "\t" << danhSach[i].maSV << "\t" << danhSach[i].hoTen << "\t" << diemTB << "\t" << xepLoai << endl;
    }
}

int main()
{
    SinhVien danhSach[45]; 
    int siSo;
    
    nhapDanhSachSinhVien(danhSach, siSo);
    inDanhSachSinhVien(danhSach, siSo);

    return 0;
}
