#include <iostream>
#include <cctype>

using namespace std;
const int maxsize =100;
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
    cout << "Nhap chuoi:";
    cin.getline(s,100);
    char *p =s;
    cout << "Chuoi vua nhap co " << demTu(p) << " tu";
}