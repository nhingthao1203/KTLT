#include <iostream>
#include <ctime>
#include <cmath>
#include <iomanip>
int const MR = 10, MC = 10;

using namespace std;

int main()
{
    int arrA[MR][MC], arrB[MR][MC], arrSum[MR][MC], arrMul[MR][MC] = {0};
    int rA, cA, rB, cB;

    do 
    {
        cout << "Nhap so dong va so cot cua ma tran A: ";
        cin >> rA >> cA;
        if(rA > MR || rA < 1 || cA > MC || cA < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(rA > MR || rA < 1 || cA > MC || cA < 1);

    cout << "Cac phan tu trong ma tran A duoc khoi tao la: \n";
    srand(time(NULL));
    for(int i = 0; i < rA; ++i)
    {
        for(int j = 0; j < cA; ++j)
        {
            arrA[i][j] = rand() % 10;
            cout << setw(4) << arrA[i][j];
        }
        cout << endl;
    }

    do 
    {
        cout << "\nNhap so dong va so cot cua ma tran B: ";
        cin >> rB >> cB;
        if(rB > MR || rB < 1 || cB > MC || cB < 1)
            cout << "Khong hop le! Nhap lai.\n";
    } while(rB > MR || rB < 1 || cB > MC || cB < 1);

    cout << "Cac phan tu trong ma tran B duoc khoi tao la: \n";
    srand(time(NULL));
    for(int i = 0; i < rB; ++i)
    {
        for(int j = 0; j < cB; ++j)
        {
            arrB[i][j] = rand() % 10;
            cout << setw(4) << arrB[i][j];
        }
        cout << endl;
    }


    //Tong 2 ma tran
    if(rA == rB && cA == cB)
    {
        for(int i = 0; i < rA; ++i)
            for(int j = 0; j < cA; ++j)
                arrSum[i][j] = arrA[i][j] + arrB[i][j];
        
        cout << "\nTong 2 ma tran A va B la: \n";
        for(int i = 0; i < rA; ++i)
        {
            for(int j = 0; j < cA; ++j)
                cout << setw(4) << arrSum[i][j];
            cout << endl;
        }
    } else
        cout << "\nHai ma tran A va B khong the cong duoc voi nhau.\n";

    //Tich 2 ma tran
    if(cA == rB)
    {
        for(int i = 0; i < rA; ++i)
            for(int j = 0; j < cB; ++j)
                for(int k = 0; k < cA; ++k)
                    arrMul[i][j] += (arrA[i][k] * arrB[k][j]);
        
        cout << "\nTich 2 ma tran A va B la: \n";
        for(int i = 0; i < rA; ++i)
        {
            for(int j = 0; j < cB; ++j)
                cout << setw(4) << arrMul[i][j];
            cout << endl;
        }
    } else 
        cout << "\nHai ma tran A va B khong the nhan duoc.\n";

    system("pause");
    return 0;
}
