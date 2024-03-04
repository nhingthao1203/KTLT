#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,s1="";
    cout <<"Nhap vao chuoi: ";
    getline(cin,s);
    for (int i=0; i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
        continue;
        else s1+=s[i];

    }
    cout <<"\nChuoi la: "<<s1;
    return 0;
    system("pause");
}