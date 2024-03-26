#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
int const MR = 10, MC = 15;

using namespace std;

int main()
{
    int arr[MR][MC];
    int r, c, sum = 0;
    int min, max, minR, minC, maxR, maxC;

    cout << "a. ";
    do 
    {
        cout << "Nhap so dong va so cot: ";
        cin >> r >> c;
        if(r > MR || r < 1 || c > MC || c < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(r > MR || r < 1 || c > MC || c < 1);

    
     cout << "Nhap cac phan tu trong mang: \n";
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cout << "a[" << i << "][" << j <<"]=";
            cin >> arr[i][j];
            cout << endl;
        }
        
    }

    cout << "Cac phan tu trong mang duoc khoi tao la: \n";
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            cout << setw(4) <<arr[i][j];
        }
        cout << endl;
    }


    cout << "\nb. Tong cac phan tu trong mang la: ";
    for(int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j)
            sum += arr[i][j];
    cout << sum << ".\n";


    cout << "\nc. Gia tri nho nhat, lon nhat trong mang: \n";
    min = arr[0][0]; max = arr[0][0];
    for(int i = 0; i < r; ++i)
    {
        for(int j = 0; j < c; ++j)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                maxR = i; maxC = j;
            }
            if(arr[i][j] < min)
            {
                min = arr[i][j];
                minR = i; minC = j;
            }
        }
    }
    cout << "Gia tri nho nhat la: " << min << ".\n";
    cout << "Gia tri lon nhat: " << max << ".\n";

    cout << "\nd. Vi tri cua min va max: \n";
    cout << "Gia tri nho nhat o hang " << minR << ", cot " << minC << ".\n";
    cout << "Gia tri lon nhat o hang " << maxR << ", cot " << maxC << ".\n";

    system("pause");
    return 0;
}
