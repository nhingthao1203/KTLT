#include <iostream>

using namespace std;

int main() 
{
    int x, y;
    int *p;

    p = &x;
    *p = 80;

    cout << "Dia chi cua bien x: " << &x << endl;
    cout << "Dia chi luu trong con tro p: " << p << endl;
    cout << "Gia tri cua bien ma p tro den: " << *p << endl;
    cout << "Gia tri cua bien x: " << x << endl;
    
    system("pause");
    return 0;
}