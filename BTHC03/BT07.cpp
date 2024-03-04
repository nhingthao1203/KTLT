#include<iostream>
#include<cstdlib>

using namespace std;

void nhap(int *p,int n)
{
	for (int offset=0;offset<n;offset++)
	{
		*(p+offset) = rand()%100;
	}
}
void xuat(int *p,int n)
{
	for (int offset=0;offset<n;offset++)
	{
		cout << *(p+offset) << " ";
	}
	cout << endl;
}
int *firstLocaX(int *p,int n,int x)
{
	int *q=NULL;
	for (int offset=0;offset<n;offset++)
	{
		if (x==*(p+offset))
		{
			q = &offset;
			return q;
		}
	}
	return q;
}

int main()
{
	int n,x,vt=-1;
	int *p;
	cout << "Nhap so nguyen n: "; cin >> n;
	p = new int[n];

	cout << "Mang vua nhap la: ";
	nhap(p,n);
	xuat(p,n);
	cout << "Nhap gia tri can tim: "; cin >> x;
	if (firstLocaX(p,n,x))
		cout << "So " << x << " o vi tri: " << *firstLocaX(p,n,x);
	else
		cout << "Khong tim thay";
	cout << endl;

	delete []p;
	p=NULL;
	
	system("pause");
	return 0;
}