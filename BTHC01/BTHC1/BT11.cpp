#include <iostream>
#include <iomanip>
int const MR = 14, MC = 6;

using namespace std;

void taoSoDoGhe(char arr[MR][MC]);
void soDoGhe(char arr[MR][MC]);
void menu();
bool conTrong(char arr[MR][MC], int rowP, int colP);
void datGhe(char arr[MR][MC], int rowP, int colP);
void chonGhe(char arr[MR][MC]);

int main()
{
    char arrPos[MR][MC] = {'*'};
    bool cont = true;
    char contC;

    taoSoDoGhe(arrPos);
    soDoGhe(arrPos);
    cout << endl;

    while(cont)
    {
        menu();
        chonGhe(arrPos);
        
        cout << "\n Dat ve tiep (y/n)? ";
        cin >> contC;
        if(tolower(contC) == 'y')
            cont = true;
        else  
            cont = false;
        system("cls");
        soDoGhe(arrPos);
    }

    system("pause");
    return 0;
}

void taoSoDoGhe(char arr[MR][MC])
{
    char pos = 'A';
    for(int i = 0; i < MR; i++)
    {
        for(int j = 0; j < MC; j++)
        {
            if( i == 0)
                arr[i][j] = pos++;
            else 
                arr[i][j] = '*';
        }
    }
}
void soDoGhe(char arr[MR][MC])
{
    for(int i = 0; i < MR; ++i)
    {
        if(i != 0)
            cout << "Hang" << setw(3) << i;
        else
            cout << setw(7) << " ";
        for(int j = 0; j < MC; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }

    cout << "\n(*: cho con trong, x: cho da dat.)\n";
}
void menu()
{
    cout << "Hang 1 va 2 la hang thuong gia.\n";
    cout << "Hang 3 den hang 7 la hang pho thong.\n";
    cout << "Hang 8 den hang 13 la hang tiet kiem.\n\n";
}
bool conTrong(char arr[MR][MC], int rowP, int colP)
{
    if(arr[rowP][colP] == '*')
        return true;
    else
        return false;
}
void datGhe(char arr[MR][MC], int rowP, int colP)
{
    arr[rowP][colP] = 'X';
}
void chonGhe(char arr[MR][MC])
{
    int rowP, colP;
    char colPTemp;

    do 
    {
        cout << "Chon hang ghe muon dat (1 - 13): ";
        cin >> rowP; 
        if(rowP < 1 || rowP > MR - 1)
            cout << "Hang ghe khong hop le! Nhap lai.\n";  
    } while((rowP < 1 || rowP > MR - 1));

    do 
    {
        cout << "Chon day ghe muon dat (A - F): ";
        cin >> colPTemp;
        colPTemp = toupper(colPTemp);
        if(colPTemp < 'A' || colPTemp > 'F')
            cout << "Day ghe khong hop le! Nhap lai.\n";
    } while(colPTemp < 'A' || colPTemp > 'F');
    colP = colPTemp - 'A';

    if(conTrong)
    {
        datGhe(arr, rowP, colP);
        cout << "Dat ghe thanh cong.\n";
    }
    else 
        cout << "Dat ghe khong thanh cong.\n";
}
