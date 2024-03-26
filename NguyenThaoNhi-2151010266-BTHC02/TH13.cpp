#include <iostream>
using namespace std;

int pascalValue(int row, int col) {
    if (col == 0 || col == row)
        return 1;
    return pascalValue(row - 1, col - 1) + pascalValue(row - 1, col);
}

void printPascalTriangle(int givenHeight) {
    for (int row = 0; row < givenHeight; ++row) {
        for (int col = 0; col <= row; ++col) {
            cout << pascalValue(row, col) << " ";
        }
        cout << endl;
    }
}

int main() {
    int height;
    cout << "Nhap chieu cao cua tam giac Pascal: ";
    cin >> height;

    printPascalTriangle(height);

    return 0;
}
