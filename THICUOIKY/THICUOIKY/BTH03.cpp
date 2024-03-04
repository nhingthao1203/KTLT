#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct Ngaysinh
{
	int ngay, thang, nam;
};
struct SinhVien
{
	string hoSV, tenSV;
	int maSV;
	Ngaysinh NS;
	double DQT, DCK;

};
void Nhap1sv(SinhVien& sv)
{
	cin.ignore();
	cout << "\nNhap ma SV:";
	cin >> sv.maSV;
	cin.ignore();
	cout << "\nNhap ho SV:";
	getline(cin, sv.hoSV);
	cout << "\nNhap ten SV:";
	getline(cin, sv.tenSV);
	cout << "\nNhap vao ngay thang nam sinh cua SV:";
	cout << "\nNgay sinh:";
	cin >> sv.NS.ngay;
	cout << "\nThang sinh:";
	cin >> sv.NS.thang;
	cout << "\nNam sinh:";
	cin >> sv.NS.nam;
	cout << "\nDiem SV:";
	cout << "\nDiem qua trinh:";
	cin >> sv.DQT;
	cout << "\nDiem cuoi ky";
	cin >> sv.DCK;
}
void nhapDSSV(SinhVien*& ds, int& n)
{
	do
	{
		cout << "\nNhap vao so luong SV ban muon nhap vao (n<=10):";
		cin >> n;
		if (n <= 0 || n > 50)
			cout << "\nNhap sai! Nhap lai:";
	} while (n <= 0 || n > 50);
	ds = new SinhVien[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap vao thong tin cua SV thu " << i+1 << ":";
		Nhap1sv(ds[i]);

	}
}
void GhiDSSV(SinhVien* ds, int n)
{
	ofstream outSV;
	outSV.open("BT3.txt");
	if (outSV.is_open())
	{
		cout << "Mo file thanh cong\n";
		for (int i = 0; i <= n - 1; i++)
		{
			outSV << "\nSinh vien thu " << i + 1 << " :\n";
			outSV << "Ma SV:"<< ds[i].maSV;
			outSV << "\nHo SV:"<< ds[i].hoSV;
			outSV << "\nTen SV:" << ds[i].tenSV;
			outSV << "\nNgay thang nam sinh cua SV:";
			outSV << "\nNgay sinh:";
			outSV << ds[i].NS.ngay;
			outSV << "\nThang sinh:";
			outSV <<ds[i].NS.thang;
			outSV << "\nNam sinh:";
			outSV << ds[i].NS.nam;
			outSV << "\nDiem qua trinh: " << ds[i].DQT;
			outSV << "\nDiem cuoi ky: " << ds[i].DCK;
		}
	}
}
void DocDSSV(SinhVien* ds, int n)
{
	ifstream inSV;
	int ma = 0;
	inSV.open("BT.txt");
	if (inSV.is_open())
	{
		inSV >> ma;
		for (int i = 0; i <= n - 1; i++)
		{
			if (ds[i].maSV==ma) 
			cout << "Sinh vien thu " << i + 1 << " :\n";
			cout << "Ma SV:" << ds[i].maSV;
			cout << "\nHo SV:" << ds[i].hoSV;
			cout << "\nTen SV:" << ds[i].tenSV;
			cout << "\nNgay thang nam sinh cua SV:";
			cout << "\nNgay sinh:";
			cout << ds[i].NS.ngay;
			cout << "\nThang sinh:";
			cout << ds[i].NS.thang;
			cout << "\nNam sinh:";
			cout << ds[i].NS.nam;
			cout << "\nDiem qua trinh: " << ds[i].DQT;
			cout << "\nDiem cuoi ky: " << ds[i].DCK;
			cout << "\Diem tong ket cua sinh vien nay:" << ds[i].DQT * 0.4 + ds[i].DCK * 0.6;
				
		}
	}
}

int main()
{
	SinhVien* a = 0;
	int k, n, dem = 0;
	bool check = false;
	do
	{
		cout << "\n1.Nhap vao thong tin SV"
			<< "\n2.Ghi thong tin SV"
			<< "\n3.Doc thong tin SV tu file"
			<< "\n5.Thoat\nBan chon:";
		cin >> k;
		switch (k)
		{
		case 1:
		{
			nhapDSSV(a, n);
			check = true;
			break;
		}
		case 2:
		{
			GhiDSSV(a, n);
			break;
		}
		case 3:
		{
			DocDSSV(a, n);
			break;
		}

		default:
			delete[]a;
			a = nullptr;
			delete[]b;
			b = nullptr;
		}
	} while (k > 0 && k < 4);


}