#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<cmath>

using namespace std;

void nhap(int **p,int row,int col)
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			p[i][j] = rand()%20;
		}
	}
}
void xuat(int **p,int row,int col)
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			cout << setw(3) << p[i][j];
		}
		cout << endl;
	}
}
bool prime(int n)
{
	if (n<2)
		return false;
	else
	{
		for (int i=2;i<=sqrt((double)n);i++)
		{
			if (n%i==0)
				return false;
		}
	}
	return true;
}
int sumPrime(int **p,int row,int col)
{
	int sumP=0;
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			if (prime(*(*(p+i)+j)))
				sumP+=*(*(p+i)+j);
		}
	}
	return sumP;
}

int main()
{
	int **p,r,c;
	cout << "Nhap so dong: "; cin >> r;
	cout << "Nhap so cot: "; cin >> c;

	p = new int*[r];
	for (int i=0;i<r;i++)
		p[i] = new int [c];
	nhap(p,r,c);
	xuat(p,r,c);
	cout << "Tong cac so nguyen to co trong mang la: " << sumPrime(p,r,c) << endl;

	for (int i=0;i<r;i++)
		delete []p[i];
	delete []p;
	p=NULL;
    
	system("pause");
	return 0;
}