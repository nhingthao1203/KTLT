#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream onF;
    onF.open("BT4.txt", ios::out);
    char chuoi[21];
    char* p = chuoi;
    cout << "\nNhap vao chuoi ky tu:" << endl;
    cin.getline(chuoi, 21);
    if (onF.is_open())
    {
        while (*p)
        {
            if (int(*(p)) >= 97 && int(*(p)) <= 122) onF << char(toupper(*p)) << endl;
            else onF << char(*p) << endl;
            p++;
            

        }
        onF.close();
        cout << "\nGhi file thanh cong" << endl;
    }
    else
        cout << "Khong mo duoc file hay kiem tra lai" << endl;
    system("pause");
}