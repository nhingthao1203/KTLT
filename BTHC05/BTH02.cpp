#include <iostream>
#include <ctime>
using namespace std;

struct NhanVien
{
    string maNV;
    string hoTen;
    int namVL;
    int namSinh;
};
void nhap(NhanVien&NV, int namHienTai)
{
    cout <<"\nMa nhan vien:";
    getline(cin, NV.maNV);
    cout <<"\nHo ten nhan vien:";
    getline(cin, NV.hoTen);
    do
    {
        cout <<"\nNam nhan vien do vao lam:";
        cin >> NV.namVL;
        if (NV.namVL>namHienTai) 
             cout <<"\nBan nhap nam vao lam sai roi! Hay nhap lai.";
    }while (NV.namVL>namHienTai );
    do
    {
        cout <<"\nNam sinh cua nhan vien do:";
        cin >> NV.namSinh;
        if (NV.namSinh>namHienTai) 
             cout <<"\nBan nhap nam vao lam sai roi! Hay nhap lai.";
    }while (NV.namSinh>namHienTai );
    
}

int nam(int n, int namHienTai)
{
    return namHienTai - n; 
}
void xuat (NhanVien&NV,int namHienTai)
{
    cout <<"\nMa nhan vien:" <<NV.maNV;
    cout <<"\nHo ten nhan vien:" <<NV.hoTen;
    cout <<"\nSo nam nhan vien do lam:" << nam(NV.namVL,namHienTai);
    cout <<"\nSo tuoi cua nhan vien do:" <<nam(NV.namSinh,namHienTai);
}
int main()
{
    NhanVien NV;
    time_t now = time(0); // Tra ve tong so nam hien tai tinh tu 1970
    tm* t = localtime(&now);
    int namHienTai = t->tm_year + 1900;
    nhap(NV,namHienTai);
    xuat (NV,namHienTai);
   

}

