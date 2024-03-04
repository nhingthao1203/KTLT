#include <iostream>
#include <fstream>
#include <string>

using namespace std;
struct SinhVien
{
	string maSV,tenSV;
	int namSinh;

};
void Nhap1sv (SinhVien &sv)
{
	cin.ignore();
	cout << "\nNhap ma SV:";
	getline(cin,sv.maSV);
	cout << "\nNhap ho va ten SV:";
	getline(cin, sv.tenSV);
	cout << "\nNhap vao nam sinh SV:";
	cin >> sv.namSinh;
}
void nhapDSSV(SinhVien *&ds, int &n)
{
	do
	{
		cout << "\nNhap vao so luong SV ban muon nhap vao (n<=10):";
		cin >> n;
		if (n <= 0 || n > 10)
			cout << "\nNhap sai! Nhap lai:";
	} while (n<=0||n>10);
	ds = new SinhVien[n];
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap vao thong tin cua SV thu " << i << ":";
		Nhap1sv(ds[i]);

	}
}
void GhiDSSV(SinhVien* ds, int n)
{
	ofstream outSV;
	outSV.open("BT6.txt");
	if (outSV.is_open())
	{
		cout << "Mo file thanh cong\n";
		for (int i = 0; i <= n - 1; i++)
		{
			outSV << ds[i].maSV << '#' 
				<< ds[i].tenSV << '#' 
				<< ds[i].namSinh << endl;
		}
	}
}
void DocDSSV(SinhVien* ds, int n)
{
	ifstream inSV;
	inSV.open("BT6.txt");
	if (inSV.is_open())
	{
		for (int i = 0; i <= n - 1; i++)
		{
			string HoTen, MSSV;
			int NamSinh;
			getline(inSV, MSSV, '#');
			getline(inSV, HoTen, '#');
			inSV >> NamSinh;
			
			cout << "\nSinh vien thu " << i << ":"
				<< "MSSV: " << MSSV << endl
				<< "Ho Ten: " << HoTen << endl
				<< "Nam Sinh: " << NamSinh << endl;
		}
	}
}
void traDSSV(SinhVien*ds, SinhVien*&b, int n, int &dem)
{
	b = new SinhVien[n];

	for (int i = 0; i < n; i++)
	{
		if (ds[i].namSinh >= 2000 && ds[i].namSinh <= 2003) {
			b[dem] = ds[i];
			dem++;
		}
	}
}

int main()
{
	SinhVien* a=0;
	SinhVien* b = 0;
	int k,n,dem =0;
	bool check = false;
	do
	{
		cout << "\n1.Nhap vao thong tin SV"
			<< "\n2.Ghi thong tin SV"
			<< "\n3.Doc thong tin SV tu file"
			<< "\n4.Tao ds nam sinh"
			<< "\n5.Thoat\nBan chon:";
		cin >> k;
		switch(k)
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
			case 4:
			{
				traDSSV(a,b,n,dem);
				if (dem == 0) cout << "\nKhong co ai trong nam do ca!";
				else GhiDSSV(b, dem);
				break;
			}
			
			default:
				delete[]a;
				a = nullptr;
				delete[]b;
				b = nullptr;
		}
	} while (k > 0 && k < 5);


}