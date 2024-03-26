#include <iostream>
#include <ctime>
#include <iomanip>
int const MR = 5, MC = 6;

using namespace std;

int main()
{
    int arr[MR][MC];
    int r, c, sum = 0, sumS;
    int  x, count = 0, posArr[MR * MC][2];
    char sumP; 

    cout << "a. ";
    do 
    {
        cout << "Nhap so dong va so cot: ";
        cin >> r >> c;
        if(r > MR || r < 1 || c > MC || c < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(r > MR || r < 1 || c > MC || c < 1);

    cout << "Cac phan tu trong mang duoc khoi tao la: \n";
    srand(time(NULL));
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            arr[i][j] = rand() % 10;
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }


    cout << "\nb. ";
    do 
    {
        cout << "Ban muon tinh tong cot hay hang (c/h)? ";
        cin >> sumP;
        if(tolower(sumP) != 'c' && tolower(sumP) != 'h')
            cout << "Khong hop le! Nhap lai.\n";
    } while(tolower(sumP) != 'c' && tolower(sumP) != 'h');

    if(tolower(sumP) == 'h')
    {
        do 
        {
            cout << "Nhap hang can tinh tong: ";
            cin >> sumS;
            if(sumS > r || sumS < 1)
                cout << "Hang khong hop le! Nhap lai.\n";
        } while(sumS > r || sumS < 1);

        for(int j = 0; j < c; ++j)
            sum += arr[sumS][j];
        
        cout << "Tong cac phan tu tren hang " << sumS << " la: " << sum << ".\n";
    } else if(tolower(sumP) == 'c')
    {
        do 
        {
            cout << "Nhap cot can tinh tong: ";
            cin >> sumS;
            if(sumS > c || sumS < 1)
                cout << "Cot khong hop le! Nhap lai.\n";
        } while(sumS > c || sumS < 1);

        for(int i = 0; i < r; ++i)
            sum += arr[i][sumS];
        cout << "Tong cac phan tu tren cot " << sumS << " la: " << sum << ".\n";
    }


    cout << "\nc. Nhap gia tri can tim trong ma tran: ";
    cin >> x;
    for(int i = 0; i < r; i++) 
    {
        for(int j = 0; j < c; j++)
        {
            if(arr[i][j] == x) 
            {
                posArr[count][1] = i;
                posArr[count][2] = j;
                ++count;
            }
        }
    }

    if(count) 
    {
        cout << x << " xuat hien " << count << " lan trong ma tran, tai cac vi tri: \n";
        for(int i = 0; i < count; i++)
            cout << "Hang " << posArr[i][1] << ", cot " << posArr[i][2] << endl;
    }
    else    
        cout << "Khong ton tai " << x << " trong ma tran.\n";

    system("pause");
    return 0;
}
