#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
const int maxsize = 100;

void chuyenKT(char* p)
{
	while (*p)
	{
		if (isspace(*p)) p++;
		else break;
	}
	*p=char(toupper(*p));
    cout << *p;
    p++;
	while (*p)
	{
		if (isspace(*(p - 1)) && isalnum(*p))
            {
				*p=char (toupper(*p));
				cout << *p;
			}
        else 
            cout <<*p;
		p++;
	}
}
int main()
{
	char s[maxsize], s1[maxsize];
	cout << "Nhap chuoi 1:";
	cin.getline(s, 100);
	cout << "\nNhap cuoi 2:";
	cin.getline(s1, 100);
	char *p = s;
	char* p1 = s1;
	if (strlen(p) > strlen( p1))
		cout << "\nChuoi mot dai hon chuoi hai";
	else
		if (strlen(p) < strlen(p1))
			cout << "\nChuoi hai dai hon chuoi mot";
		else
			cout << "\nHai chuoi bang nhau";
	
	
	cout << "\nChuoi thu nhat sau khi duoc xu ly: ";
     chuyenKT(p);
	cout << "\nChuoi thu hai sau khi duoc xu ly: ";
     chuyenKT(p1);

	strcat(p,p1);
	cout <<"\nHai chuoi ghep lai thanh: "<< p;
	return 0;
}