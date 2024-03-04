#include<iostream>
#include <string>

using namespace std;

void xuongDong(string s)
{
	for (int i = 0; i < s.length(); i++)
		cout << s[i] << endl;
}
int main()
{
	string s;
	cout << "Nhap vao chuoi s:";
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = char(s[i] - 32);

	xuongDong(s);
	return 0;
	system("pause");

}