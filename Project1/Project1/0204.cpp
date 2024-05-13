#include <iostream>
#include <string>
using namespace std;

struct NTN {
    int day, month, year;
};

struct Student {
    string Name;
    NTN date;
    float mathScore;
};

int main() {
    int n, sum = 0; 
    cout << "Nhap vao n:";
    cin >> n;
    Student* student = new Student[n];
    cin.ignore();
    for (int i = 0; i < n; i++) { 
        cout << "Tên";
        getline(cin, student[i].Name);
        cout << "\nngay sinh";
        cin >> student[i].date.day;
        cout << "\nthang sinh";
        cin >> student[i].date.month;
        cout << "\nnam sinh:";
        cin >> student[i].date.year;
        >> student[i].date.month;
        cout << "\nToan:";
        cin >> student[i].mathScore;
        sum = sum + student[i].mathScore;
    }
    bool check = false;
    for (int i = 0; i < n; i++) { 
        if (student[i].mathScore > sum / n) {
            cout << student[i].Name << endl;
            cout << student[i].date.day << endl;
            cout << student[i].date.month << endl;
            cout << student[i].date.year << endl;
            cout << student[i].mathScore << endl;
            check = true; // Set check to true if a student is found above average
        }
    }
    if (!check) // Simplified condition
        cout << "Khong co sinh vien tren diem trung binh";
    delete[] student;
    return 0;
}
