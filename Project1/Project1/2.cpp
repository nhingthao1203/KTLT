#include <iostream>
#include <string>
using namespace std;

struct Kho {
    string Name;
    int Weight;
};

int main() {
    int n;
    cout << "Nhap vao n:";
    cin >> n;
    Kho* kho = new Kho[n];
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "Ten: ";
        getline(cin, kho[i].Name);
        cout << "Trong tai: ";
        cin >> kho[i].Weight;
        cin.ignore();
        cout << endl;
    }
    cout << "kho hien co la:";
    bool check = false;
    for (int i = 0; i < n; i++) {
        cout << "\nkho thu " << i << ": " << kho[i].Name;
        cout << "\nTrong tai: " << kho[i].Weight;
    }
    cout << "Kho trong:";
    cout << endl;
    for (int i = 0; i < n; i++) {
        if (kho[i].Weight > 10) {
            cout << "\nkho thu " << i << ": " << kho[i].Name;
            cout << "\nTrong tai: " << kho[i].Weight;
            check = true;
        }
    }
    if (!check)
        cout << "Khong co kho trong!";
    delete[] kho;
    return 0;
}
