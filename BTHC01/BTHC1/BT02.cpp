#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    int a[4][3];
    int i = 0, j = 0;

    while(i < 4)
    {
        j = 0;
        while(j < 3)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
            ++j;
        }
        ++i;
    }

    cout << "Mang duoc khoi tao la:\n";
    i = 0;
    while(i < 4)
    {
        j = 0;
        while(j < 3)
        {
            cout << setw(4) << a[i][j];
            ++j;
        }
        ++i;
        cout << endl;
    }

    system("pause");
    return 0;
}
