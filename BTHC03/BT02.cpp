#include <iostream>
#include <cstdlib>
int const MS = 30;

using namespace std;

int main() 
{
    int a[MS];
    int *p = a;

    for (int i = 0; i < MS; ++i)
        a[i] = rand() % 9;
    
    cout << "Xuat mang bang phuong phap do doi: \n";
    for (int i = 0; i < MS; ++i)
        cout << *(p + i) << " ";
    cout << endl;

    cout << "Xuat mang bang phuong phap chi so: \n";
    for (int i = 0; i < MS; ++i)
        cout << p[i] << " ";
    cout << endl;

    system("pause");
    return 0;
}