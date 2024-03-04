#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
const int maxsize = 100;


int main()
{
	char s[maxsize], s1[maxsize];
	cout << "Nhap chuoi ky tu(ho, ten):";
	cin.getline(s, 100,',');
	cin.getline(s1, 100);
	char *p = s;
	char *p1 = s1;
	strcat(p,p1);
	cout <<"\nHo ten cua nguoi dung la: "<< p;
	return 0;
	

}