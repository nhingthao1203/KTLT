#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inF;
    inF.open("BT4.txt", ios::in);
    char kt[2];
    string s[100]; 
    if (inF.is_open())
    {
        
        int dem = 0;
        while (inF.getline(kt,2))
        {
            dem++;
            //inF.ignore();
            cout << kt <<endl;
            inF.getline(s, 100);
            getline (inF, s);
        }
        cout <<"Co "<< dem<<" ky tu:";
        inF.close();
        cout << "\nGhi file thanh cong" << endl;
    }
    else
        cout << "Khong mo duoc file hay kiem tra lai" << endl;
    system("pause");
}