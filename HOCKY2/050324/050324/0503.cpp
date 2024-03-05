//#include<iostream>
//
//using namespace std;
//
//const int MAXROW = 50, MAXCOL = 50;
//
//int r, c, n;
//
//int a[MAXROW][MAXCOL];
//
//int main() {
//
//	cout << "Input row:";
//
//	cin >> r;
//
//	cout << "Input colum:";
//
//	cin >> c;
//
//	for (int i = 0; i < r; i++)
//
//	{
//
//		for (int j = 0; j < c; j++) {
//
//			std::cin >> a[i][j];
//
//		}
//
//
//	}
//
//	for (int i = 0; i < r; i++) {
//
//		for (int j = 0; j < c; j++)
//
//		{
//
//			cout << a[i][j] << " ";
//
//		}
//
//		cout << "\n";
//
//	}
//
//	int tam;
//
//	cout << "Input col n:";
//
//	cin >> n;
//
//	n--;
//
//	for (int i = 0; i < c; i++)
//
//		for (int j = i + 1; j < c; j++)
//
//		{
//
//			if (a[i][n] > a[j][n])
//
//			{
//
//				tam = a[i][n];
//
//				a[i][n] = a[j][n];
//
//				a[j][n] = tam;
//
//			}
//
//		}
//	cout << "After sort:\n";
//	for (int i = 0; i < c; i++) {
//
//		{
//			cout << a[i][n] << " ";
//		}
//
//	}
//	cout << "\nYour array after sort:\n";
//	for (int i = 0; i < r; i++) {
//
//		for (int j = 0; j < c; j++)
//
//		{
//
//			cout << a[i][j] << " ";
//
//		}
//
//		cout << "\n";
//
//	}
//
//}