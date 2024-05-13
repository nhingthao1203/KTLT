#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib> // Để sử dụng hàm rand()

const int MR = 14, MC = 6;

using namespace std;

// Hàm menu
void menu();
// Các hàm thao tác với mảng
void taoMangThuCong(int** arr, int n, int m);
void taoMangRandom(int** arr, int n, int m);
void xuatMang(int** arr, int n, int m);
void sapXepMangTangDanTheoDong(int** arr, int n, int m);
void sapXepMangTangDanTheoCot(int** arr, int n, int m);
void tinhtongtheoDong(int** arr, int n, int m);
void tinhtongtheoCot(int** arr, int n, int m);
void spiralFill(int** arr, int n, int m);
void spiralFillRighttoLeft(int** arr, int n, int m);

int main() {
    char cont = 'y';
    while (cont == 'y' || cont == 'Y') {
        menu();
        cout << "Ban co muon tiep tuc (y/n)? ";
        cin >> cont;
        cin.ignore(); // Loại bỏ kí tự newline từ cin
        system("cls");
    }
    return 0;
}

// Các hàm thao tác với mảng

void taoMangThuCong(int** arr, int n, int m) {
    arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }

    cout << "Nhap cac phan tu cua mang: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void taoMangRandom(int** arr, int n, int m) {
    arr = new int*[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[m];
    }

    cout << "Nhap cac phan tu cua mang: \n";
    int k;
    cout << "Nhap so nguyen k: ";
    cin >> k;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            arr[i][j] = rand() % (k + 1);
        }
    }
}

void xuatMang(int** arr, int n, int m) {
    cout << "Mang hien tai: " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}

void sapXepMangTangDanTheoDong(int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m - 1; ++j) {
            for (int k = j + 1; k < m; ++k) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

void sapXepMangTangDanTheoCot(int** arr, int n, int m) {
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n - 1; ++j) {
            for (int k = j + 1; k < n; ++k) {
                if (arr[j][i] > arr[k][i]) {
                    int temp = arr[j][i];
                    arr[j][i] = arr[k][i];
                    arr[k][i] = temp;
                }
            }
        }
    }
}

void tinhtongtheoDong(int** arr, int n, int m) {
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += arr[i][j];
        }
        cout << "Tong cua dong " << i << " la: " << sum << endl;
    }
}

void tinhtongtheoCot(int** arr, int n, int m) {
    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int j = 0; j < n; ++j) {
            sum += arr[j][i];
        }
        cout << "Tong cua cot " << i << " la: " << sum << endl;
    }
}

void spiralFill(int** arr, int n, int m) {
    int val = 1;
    int k = 0, l = 0;
    while (k < n && l < m) {
        for (int i = l; i < m; ++i) {
            arr[k][i] = val++;
        }
        k++;
        for (int i = k; i < n; ++i) {
            arr[i][m - 1] = val++;
        }
        m--;
        if (k < n) {
            for (int i = m - 1; i >= l; --i) {
                arr[n - 1][i] = val++;
            }
            n--;
        }
        if (l < m) {
            for (int i = n - 1; i >= k; --i) {
                arr[i][l] = val++;
            }
            l++;
        }
    }
}

void spiralFillRighttoLeft(int** arr, int n, int m) {
    int val = 1;
    int k = 0, l = 0;
    while (k < n && l < m) {
        for (int i = m - 1; i >= l; --i) {
            arr[k][i] = val++;
        }
        k++;
        for (int i = k; i < n; ++i) {
            arr[i][l] = val++;
        }
        l++;
        if (k < n) {
            for (int i = l; i < m; ++i) {
                arr[n - 1][i] = val++;
            }
            n--;
        }
        if (l < m) {
            for (int i = n - 1; i >= k; --i) {
                arr[i][m - 1] = val++;
            }
            m--;
        }
    }
}

// Hàm menu
void menu() {
    cout << "1. Tao mang thu cong" << endl;
    cout << "2. Tao mang ngau nhien" << endl;
    cout << "3. Xuat mang" << endl;
    cout << "4. Sap xep mang tang dan theo dong" << endl;
    cout << "5. Sap xep mang tang dan theo cot" << endl;
    cout << "6. Tinh tong theo dong" << endl;
    cout << "7. Tinh tong theo cot" << endl;
    cout << "8. Spiral Fill" << endl;
    cout << "9. Spiral Fill Right to Left" << endl;
    cout << "10. Thoat" << endl;
    cout << "Lua chon cua ban: ";
    int choice;
    cin >> choice;

    int** arr = nullptr;
    int n, m;
    switch (choice) {
        case 1:
            cout << "Nhap so phan tu cua mang: ";
            cout << "Nhap n: ";
            cin >> n;
            cout << "Nhap m: ";
            cin >> m;
            arr = new int*[n];
            for (int i = 0; i < n; ++i) {
                arr[i] = new int[m];
            }
            taoMangThuCong(arr, n, m);
            break;
        case 2:
            cout << "Nhap so phan tu cua mang: ";
            cout << "Nhap n: ";
            cin >> n;
            cout << "Nhap m: ";
            cin >> m;
            arr = new int*[n];
            for (int i = 0; i < n; ++i) {
                arr[i] = new int[m];
            }
            taoMangRandom(arr, n, m);
            break;
        case 3:
            xuatMang(arr, n, m);
            break;
        case 4:
            sapXepMangTangDanTheoDong(arr, n, m);
            break;
        case 5:
            sapXepMangTangDanTheoCot(arr, n, m);
            break;
        case 6:
            tinhtongtheoDong(arr, n, m);
            break;
        case 7:
            tinhtongtheoCot(arr, n, m);
            break;
        case 8:
            spiralFill(arr, n, m);
            break;
        case 9:
            spiralFillRighttoLeft(arr, n, m);
            break;
        case 10:
            // Giải phóng bộ nhớ trước khi thoát
            for (int i = 0; i < n; ++i) {
                delete[] arr[i];ư
            }
            delete[] arr;
            return;
        default:
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
            break;
    }
}
