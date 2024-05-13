#include <iostream>

using namespace std;

struct phanSo
{
    int tu, mau;
};
void nhap (phanSo &p)
{
    cout <<"\nNhap tu so:";
    cin >> p.tu;
    do
    {
        cout << "\nNhap mau so:";
        cin >> p.mau;
        if (p.mau == 0) cout << "\nMau cua ban khong the bang 0. Nhap lai";
    } while (p.mau == 0);
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
phanSo tongPS(phanSo &p1, phanSo&p2)
{
    phanSo pT;
    pT.mau = p1.mau*p2.mau;
    pT.tu =  p1.tu*p2.mau+p2.tu*p1.mau;
    return pT;
    /*if (pT.tu == 0) cout << "\Tong hai phan so: 0";
    if (pT.mau == pT.tu) cout << "\n Tong hai phan so: 1";
    if (uc == 0 && pT.tu > pT.mau) cout << "\nTong hai phan so: " << pT.tu / pT.mau;
    cout <<"\n Tong hai phan so: "<<  pT.mau/uc << "/"<< pT.tu/uc;*/
}
phanSo hieuPS(phanSo &p1, phanSo& p2)
{
    phanSo pT;
    pT.tu = p1.tu * p2.mau - p2.tu * p1.mau;
    pT.mau = p1.mau * p2.mau;
    return pT;

}
phanSo tichPS(phanSo& p1, phanSo& p2)
{
    phanSo pT;
    pT.tu = p1.tu * p2.tu;
    pT.mau = p1.mau * p2.mau;
    return pT;
}
phanSo thuongPS(phanSo& p1, phanSo& p2)
{
    int tam = 0;
    tam = p2.tu;
    p2.tu = p2.mau;
    p2.mau = tam;
    return tichPS(p1, p2);
    
}
void xuatTong (phanSo &p, phanSo &p1)
{
    phanSo pt;
    int uc=0;
    pt = tongPS(p, p1);
    uc = gcd(pt.tu, pt.mau);
    if (pt.tu == 0) cout << "\nTong ps: 0";
    else
        if (uc == 0) cout << "\nTong ps:" << pt.tu / pt.mau;
        else
            if (pt.tu / uc == pt.mau / uc) cout << "\nTong ps:" << pt.tu / uc;
            else
                if (pt.mau / uc == 1) cout << "\nTong ps:" << pt.tu / uc;
                    else cout << "\nTong ps:" << pt.tu / uc << "/" << pt.mau / uc;
}
void xuatHieu(phanSo& p, phanSo& p1)
{
    phanSo pt;
    int uc = 0;
    pt = hieuPS(p, p1);
    uc = gcd(pt.tu, pt.mau);
    if (pt.tu == 0) cout << "\nHieu ps: 0";
    else
        if (uc == 0) cout << "\nHieu ps:" << pt.tu / pt.mau;
        else
            if (pt.tu / uc == pt.mau / uc) cout << "\nHieu ps:" << pt.tu / uc;
            else
                if (pt.mau / uc == 1) cout << "\nHieu ps:" << pt.tu / uc;
                else
                    if(pt.mau<0&&pt.tu<0) cout << "\nHieu ps:" << -pt.tu / uc << "/" << -pt.mau / uc;
                else cout << "\nHieu ps:" << pt.tu / uc << "/" << pt.mau / uc;
}
void xuatTich(phanSo& p, phanSo& p1)
{
    phanSo pt;
    int uc = 0;
    pt = tichPS(p, p1);
    uc = gcd(pt.tu, pt.mau);
    if (pt.tu == 0) cout << "\nTich ps: 0";
    else
        if (uc == 0) cout << "\nTich ps:" << pt.tu / pt.mau;
        else
            if (pt.tu / uc == pt.mau / uc) cout << "\nTich ps:" << pt.tu / uc;
            else
                if (pt.mau / uc == 1) cout << "\nTich ps:" << pt.tu / uc;
                else
                    if (pt.mau < 0 && pt.tu < 0) cout << "\nTich ps:" << -pt.tu / uc << "/" << -pt.mau / uc;
                    else cout << "\nTich ps:" << pt.tu / uc << "/" << pt.mau / uc;
}
void xuatThuong(phanSo& p, phanSo& p1)
{
    phanSo pt;
    int uc = 0;
    pt = thuongPS(p, p1);
    uc = gcd(pt.tu, pt.mau);
    if (pt.tu == 0) cout << "\nThuong ps: 0";
    else
        if (uc == 0) cout << "\nThuong ps:" << pt.tu / pt.mau;
        else
            if (pt.tu / uc == pt.mau / uc) cout << "\nThuong ps:" << pt.tu / uc;
            else
                if (pt.mau / uc == 1) cout << "\nThuong ps:" << pt.tu / uc;
                else
                    if (pt.mau < 0 && pt.tu < 0) cout << "\nThuong ps:" << -pt.tu / uc << "/" << -pt.mau / uc;
                    else cout << "\nThuong ps:" << pt.tu / uc << "/" << pt.mau / uc;
}
int main()
{
    phanSo ps,ps1;
    cout <<"\nNhap phan so thu 1:";
    nhap(ps);
    cout <<"\nNhap phan so thu 2:";
    nhap(ps1);
    xuatTong(ps,ps1);
    xuatHieu(ps, ps1);
    xuatTich(ps, ps1);
    xuatThuong(ps, ps1);


}