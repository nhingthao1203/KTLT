#include<iostream>
#include<cstdlib> 
using namespace std;

const int MAX = 100;
int a[MAX][MAX];

void Randominit(int arr[MAX][MAX], int n, int m);
void PrintArr(int arr[MAX][MAX], int n, int m);

int main() {
    int row, col, option;

    cout << "Nhap vao mang:"
        << "\n Nhap vao so dong:";
    cin >> row;
    cout << "\n Nhap vao so cot:";
    cin >> col;

    cout << "\nOption:"
        << "\n1. Nhap cac phan tu tu ban phim."
        << "\n2. Random cac phan tu."
        << "\nChon option:";
    cin >> option;

    if (option == 1) {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
            {
                cout << "\na[" << i << "][" << j << "]:";
                cin >> a[i][j];
            }
        }
    }
    else if (option == 2) {
        Randominit(a, row, col);
    }

    cout << "\nMang hien tai:\n";
    PrintArr(a, row, col);


    return 0;
}

void Randominit(int arr[MAX][MAX], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 100; 
        }
    }
}

void PrintArr(int arr[MAX][MAX], int n, int m){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}