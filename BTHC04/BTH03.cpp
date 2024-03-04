#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;
const int maxsize = 100;
// loai ky tu trang dau chuoi
void loaiKTD(char *p)
{
    
    while (*p)
    {
        if(isspace(*p))
        {
            *p= char (int (*p)-32);
            p++;
        }
        else break;
    }
}

//loai ky tu trang cuoi chuoi
void loaiKTC(char *p, int &n)
{
    while (n=0)
    {
        if (isspace(*p+n-1)) 
        {   n--;
        }
        else break;
    }
}
//Dem so ky tu trong chuoi
int demKT(char *p)
{
    int dem=0;
    while (*p)
    {
        if (isspace(*p)) 
        {   
            dem++;
            p++;
        }
        p++;
    }
    return dem;
}
//dem ky tu so va chuoi
int demSVC(char *p)
{
    int dem=0;
    while (*p)
    {
        if (isalnum(*p))
        { dem ++;
        p++;
        }
        p++;
    }
    return dem;
}
//dem ky tu in hoa
int demKTHOA(char *p)
{
    int dem=0;
    while (*p)
    {
        if (isupper(*p))
        {
            dem ++;
            p++;
        }
        p++;
    }
    return dem;
}
//dem kt thuong
int demKTT(char *p)
{
    int dem=0;
    while (*p)
    {
        if (islower(*p))
        {
            dem ++;
            p++;
        }
        p++;
    }
    return dem;
}

void chuyenKTT(char *p)
{
    while (*p)
    {
        if(islower(*p))
        { 
            *p=char (toupper(*p));
            p++;
        }
        p++;
    }
}
void chuyenKTH(char *p)
{
    while (*p)
    {
        if(isupper(*p))
        { 
            *p=char (tolower(*p));
            p++;
        }
        p++;
    }
}
void chuyenKTD(char* p)
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

int demKT( char *p )
{
    int demkt = 0;
    while (*p) 
    {
        if (isalnum(*p)) demkt++;
        p++;
    }
    return demkt;
}
int demTu(char *p)
{
    int demTu=0;
    if (demKT(p)==0) return 0;
    else 
    {
        while (*p) 
        {
            if (isspace (*p)) p++;
            else break;
        }
        demTu ++;
        p++;
        while (*p) 
        {
            if (isspace (*(p-1)) && isalnum (*p)) demTu++;
            p++;
    
        }
        return demTu;

}
}
int main()
{
	char s[maxsize];
	cout << "Nhap chuoi ky tu:";
	cin.getline(s, 100);
	char *p = s;
    cout <<"So khoang trang cua chuoi: "<< demKT(p);
    loaiKTD(p);
    cout <<p;
	return 0;
	

}