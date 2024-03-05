#include<iostream>

using namespace std;

const int MAXROW = 50, MAXCOL = 50;

int r, c, n;

int a[MAXROW][MAXCOL];

int main() {

	cout << "Input row:";

	cin >> r;

	cout << "Input colum:";

	cin >> c;

	for (int i = 0; i < r; i++)
	{

		for (int j = 0; j < c; j++) {

			//cout << "Input a[", i, ",", j, "]:";
			cin >> a[j][i];

		}


	}
	cout << "Your array:\n";
	for (int i = 0; i < r; i++) {
		
				for (int j = 0; j < c; j++)
		
				{
		
					cout << a[i][j] << " ";
		
				}
		
				cout << "\n";
	}
	cout << "matrix transposition:\n";
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < r; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	

}