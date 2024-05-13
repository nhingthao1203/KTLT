#include"MyTime.h"
#include<iostream>
#include<iomanip>
using namespace std;
void inputTime(MyTime &t);
void printTime(MyTime t);
int main() {
	MyTime t;
	inputTime(t);
	cout << "Nhap vao so giay de cong vao:";
	int s;
	cin >> s;
	t.increaseSecond(s);
	cout << "Thoi diem sau khi tang" << s << "giay: ";
	printTime(t);
	cout << "------------------------\n";
	cout << "Nhap vao so giay de giam di:";
	cin >> s;
	t.decreaseSecond(s);
	cout << "Thoi diem sau khi giam" << s << "giay: ";
	printTime(t);
	system("pause");
	return 0;
}
void inputTime(MyTime& t) {
	int h, m, s;
	do {
		cout << "Nhap gio:"; cin >> h;
		cout << "Nhap phut:"; cin >> m;
		cout << "Nhap giay:"; cin >> s;
		t.setHour(h);
		t.setMinute(m);
		t.setSecond(s);
	} while (!t.validTime(h, m, s));
}
void printTime(MyTime t) {
	cout << setfill('0') << setw(2) << t.getHour()
		<< ":" << setfill('0') << setw(2) << t.getMinute()
		<< ":" << setfill('0') << setw(2) << t.getSecond() << endl;
}
