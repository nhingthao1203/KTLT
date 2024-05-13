#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int** data;

public:
    // Constructor
    Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
        data = new int* [rows];
        for (int i = 0; i < rows; ++i) {
            data[i] = new int[cols];
            for (int j = 0; j < cols; ++j) {
                data[i][j] = rand() % 50; // Khởi tạo giá trị từ 0 đến 50
            }
        }
    }

    // Destructor
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] data[i];
        }
        delete[] data;
    }

    // In Matrix
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Cộng hai Matrix
    Matrix add(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Trừ hai Matrix
    Matrix subtract(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // Nhân hai Matrix
    Matrix multiply(const Matrix& other) const {
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < cols; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }
};

int main() {
    Matrix matrix1(3, 3); // Tạo Matrix 1 kích thước 3x3
    Matrix matrix2(3, 3); // Tạo Matrix 2 kích thước 3x3

    cout << "Matrix 1:\n";
    matrix1.print();
    cout << endl;

    cout << "Matrix 2:\n";
    matrix2.print();
    cout << endl;

    // Cộng hai Matrix
    Matrix sum = matrix1.add(matrix2);
    cout << "Sum of Matrix 1 and Matrix 2:\n";
    sum.print();
    cout << endl;

    // Trừ hai Matrix
    Matrix diff = matrix1.subtract(matrix2);
    cout << "Difference of Matrix 1 and Matrix 2:\n";
    diff.print();
    cout << endl;

    // Nhân hai Matrix
    Matrix product = matrix1.multiply(matrix2);
    cout << "Product of Matrix 1 and Matrix 2:\n";
    product.print();

    return 0;
}
