#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int **p=nullptr,h;
	cout << "Nhap chieu cao h: "; cin >> h;
	p = new int*[h];
	for (int i=0;i<h;i++)
	{
		p[i] = new int [h];
	}

	for (int i=0;i<h;i++)
	{
		for (int j=0;j<=i;j++)
		{
			if (j==0 || i==j)
				p[i][j] = 1;
			else
				p[i][j] = p[i-1][j-1] + p[i-1][j];
		}
	}
	for (int i=0;i<h;i++)
	{
		for (int j=0;j<h;j++)
		{
			if (i>=j)
				cout << setw(3) << p[i][j];
		}
		cout << endl;
	}

	for (int i=0;i<h;i++)
	{
		delete [] p[i];
	}
	delete [] p;
    
	system("pause");
	return 0;
}