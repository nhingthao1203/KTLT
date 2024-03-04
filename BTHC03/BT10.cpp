#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

void inputMatrix(int **p,int row,int col)
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			*(*(p+i)+j) = rand()%10;
		}
	}
}
void outputMatrix(int **p,int row,int col)
{
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			cout << setw(3) << *(*(p+i)+j);
		}
		cout << endl;
	}
}
void sumMatrix(int **p1,int row1,int col1,int **p2,int row2,int col2,int **&p3)
{
	if (col1==col2 && row1==row2)
	{
		p3 = new int*[row1];
		for (int i=0;i<row1;i++)
			p3[i] = new int [col1];
		cout << "Tong 2 ma tran la: " << endl ;
		for (int i=0;i<row1;i++)
		{
			for (int j=0;j<col1;j++)
			{
				p3[i][j] = p1[i][j] + p2[i][j];
				cout << setw(3) << p3[i][j];
			}
			cout << endl;
		}
		for (int i=0;i<row1;i++)
			delete [] p3[i];
		delete []p3;
	}
	else
		cout << "Khong the tinh tong 2 ma tran nay" << endl;
}
void mulMatrix(int **p1,int row1,int col1,int **p2,int row2,int col2,int **&p3)
{
	int temp=0;
	if (col1==row2)
	{
		p3 = new int*[row1];
		for (int i=0;i<row1;i++)
			p3[i] = new int [col2];
		cout << "Tich 2 ma tran la: " << endl ;
		for (int i=0;i<row1;i++)
		{
			for (int j=0;j<col2;j++)
			{
				temp=0;
				for (int k=0;k<row2;k++)
				{
					temp+=p1[i][k]*p2[k][j];
				}
				p3[i][j]=temp;
				cout << setw(4) << p3[i][j];
			}
			cout << endl;
		}
		for (int i=0;i<row1;i++)
			delete [] p3[i];
		delete []p3;
	}
	else
		cout << "Khong the tinh tich 2 ma tran nay" << endl;
}

int main()
{
	int **p1=NULL,**p2=NULL,**pS=NULL,**pP=NULL,r1,c1,r2,c2;
	cout << "Nhap so dong ma tran 1: "; cin >> r1;
	cout << "Nhap so cot ma tran 1: "; cin >> c1;
	p1 = new int *[r1];
	for (int i=0;i<r1;i++)
		p1[i] = new int [c1];

	inputMatrix(p1,r1,c1);
	outputMatrix(p1,r1,c1);
	cout << "Nhap so dong ma tran 2: "; cin >> r2;
	cout << "Nhap so cot ma tran 2: "; cin >> c2;
	p2 = new int *[r2];
	for (int i=0;i<r2;i++)
		p2[i] = new int [c2];
        
	inputMatrix(p2,r2,c2);
	outputMatrix(p2,r2,c2);
	sumMatrix(p1,r1,c1,p2,r2,c2,pS);
	mulMatrix(p1,r1,c1,p2,r2,c2,pP);

	for (int i=0;i<r1;i++)
		delete [] p1[i];
	delete []p1;
	for (int i=0;i<r2;i++)
		delete [] p2[i];
	delete []p2;

	system("pause");
	return 0;
}