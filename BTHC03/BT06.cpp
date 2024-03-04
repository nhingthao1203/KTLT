#include<iostream>
#include<cstdlib>

using namespace std;

void nhap(int *p,int n)
{
	for (int offset=0;offset<n;offset++)
	{
		*(p+offset) = rand()%20;
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
void hoanvi(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void arrDao(int *p,int n)
{
	for (int offset=0;offset<(n/2);offset++)
	{
		hoanvi(*(p+offset),*(p+n-offset-1));
	}
}

int main()
{
	int n;
	int *p;
	cout << "Nhap so nguyen n: "; cin >> n;
	p = new int[n];
    
	nhap(p,n);
	cout << "Mang so nguyen la: ";
	xuat(p,n);
	arrDao(p,n);
	cout << "Mang dao la: ";
	xuat(p,n);

	delete []p;
	p=NULL;
	
	system("pause");
	return 0;
}