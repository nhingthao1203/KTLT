#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s,s1="";
    cout <<"Nhap vao chuoi: ";
    getline(cin,s);
    for (int i=s.length(); i>=0;i--)
    {
        s1+=s[i];
    }
    cout <<"\nChuoi nguoc lai la: "<<s1;
    return 0;
    system("pause");
}