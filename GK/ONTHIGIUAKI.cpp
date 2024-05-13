#include <iostream>
#include <iomanip>

int const MR = 14, MC = 6;

using namespace std;
//void 
void menu();
void taoMangThuCong(int arr[MR][MC], int n, int m);
void taoMangRandom(int arr[MR][MC], int n, int m);
void xuatMang(int arr[MR][MC], int n, int m);
void sapXepMangTangDanTheoDong(int arr[MR][MC], int n, int m);
void sapXepMangTangDanTheoCot(int arr[MR][MC], int n, int m);
void tinhtongtheoDong(int arr[MR][MC], int n, int m);
void tinhtongtheoCot(int arr[MR][MC], int n, int m);
void spiralFill(int arr[MR][MC], int n, int m);
void spiralFillRighttoLeft(int arr[MR][MC], int n, int m);

//function recursive
String DectoBin(int n);
Int BinToDec(String s);
String DectoHex(int n);
String ReversalNumber(int n);
Int CountDigit(int n);

//function 
bool isPrime(int n);
//main function
int main()
{
    char cont = true;
    while(cont)
    {
        menu();
        cout << "Ban co muon tiep tuc (y/n)? ";
        cin>> cont;
        if(tolower(cont) == 'y')
            cont = true;
        else
            cont = false;
        system("cls");

    }
    system("pause");
    return 0;

}
void taoMangThuCong(int arr[MR][MC], int n, int m)
{
    int n,m;
    cout << "Nhap so phan tu cua mang: ";
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << "Nhap phan tu thu [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

void taoMangRandom(int arr[MR][MC], int n, int m)
{
    int n,m, k;
    cout << "Nhap so phan tu cua mang: ";
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap m: ";
    cin >> m;
    cout <<"Cac phan tu cua mang se nam trong khoang [0, k]. Nhap k: ";
    cin >> k;
    int arr[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            arr[i][j] = rand() % k;
        }
    }
}

void xuatMang(int arr[MR][MC], int n, int m)
{
    cout << "Mang hien tai: " << endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}

void sapXepMangTangDanTheoDong(int  arr[MR][MC], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            for(int k = j + 1; k < m; k++)
            {
                if(arr[i][j] > arr[i][k])
                {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
}

void sapXepMangTangDanTheoCot(int arr[MR][MC], int n, int m)
{
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = j + 1; k < n; k++)
            {
                if(arr[j][i] > arr[k][i])
                {
                    int temp = arr[j][i];
                    arr[j][i] = arr[k][i];
                    arr[k][i] = temp;
                }
            }
        }
    }
}
void tinhtongtheoDong(int arr[MR][MC], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < m; j++)
        {
            sum += arr[i][j];
        }
        cout << "Tong cua dong " << i << " la: " << sum << endl;
    }
}

void tinhtongtheoCot(int arr[MR][MC], int n, int m)
{
    for(int i = 0; i < m; i++)
    {
        int sum = 0;
        for(int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }
        cout << "Tong cua cot " << i << " la: " << sum << endl;
    }
}

void spiralFill(int arr[MR][MC], int n, int m)
{
    int val = 1;
    int k = 0, l = 0;
    while(k < n && l < m)
    {
        for(int i = l; i < m; i++)
        {
            arr[k][i] = val++;
        }
        k++;
        for(int i = k; i < n; i++)
        {
            arr[i][m - 1] = val++;
        }
        m--;
        if(k < n)
        {
            for(int i = m - 1; i >= l; i--)
            {
                arr[n - 1][i] = val++;
            }
            n--;
        }
        if(l < m)
        {
            for(int i = n - 1; i >= k; i--)
            {
                arr[i][l] = val++;
            }
            l++;
        }
    }
}

void spiralFillRighttoLeft(int arr[MR][MC], int n, int m)
{
    int val = 1;
    int k = 0, l = 0;
    while(k < n && l < m)
    {
        for(int i = m - 1; i >= l; i--)
        {
            arr[k][i] = val++;
        }
        k++;
        for(int i = k; i < n; i++)
        {
            arr[i][l] = val++;
        }
        l++;
        if(k < n)
        {
            for(int i = l; i < m; i++)
            {
                arr[n - 1][i] = val++;
            }
            n--;
        }
        if(l < m)
        {
            for(int i = n - 1; i >= k; i--)
            {
                arr[i][m - 1] = val++;
            }
            m--;
        }
    }
}
//function recursive
String DectoBin(int n)
{
    if(n == 0)
        return "0";
    else
        return DectoBin(n / 2) + to_string(n % 2);
}
Int BinToDec(String s)
{
    if(s == "0")
        return 0;
    else
        return 2 * BinToDec(s.substr(0, s.length() - 1)) + (s[s.length() - 1] - '0');

}
String DectoHex(int n)
{
    if(n == 0)
        return "0";
    else
    {
        int temp = n % 16;
        if(temp < 10)
            return DectoHex(n / 16) + to_string(temp);
        else
            return DectoHex(n / 16) + (char)(temp + 55);
    }
}
String ReversalNumber(int n)
{
    if(n == 0)
        return "0";
    else
        return to_string(n % 10) + ReversalNumber(n / 10);
}
Int CountDigit(int n)
{
    if(n == 0)
        return 0;
    else
        return 1 + CountDigit(n / 10);
}

//function 
bool isPrime(int n)
{
    if(n < 2)
        return false;
    for(int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}
void menu()
{
    cout << "1. Tao mang thu cong" << endl;
    cout << "2. Tao mang ngau nhien" << endl;
    cout << "3. Xuat mang" << endl;
    cout << "4. Sap xep mang tang dan theo dong" << endl;
    cout << "5. Sap xep mang tang dan theo cot" << endl;
    cout << "6. Tinh tong theo dong" << endl;
    cout << "7. Tinh tong theo cot" << endl;
    cout << "8. Spiral Fill" << endl;
    cout << "9. Spiral Fill Right to Left" << endl;
    cout << "10. Thoat" << endl;
    cout << "Lua chon cua ban: ";
    int choice;
    cin >> choice;
    switch(choice)
    {
        case 1:
            taoMangThuCong();
            break;
        case 2:
            taoMangRandom();
            break;
        case 3:
            xuatMang();
            break;
        case 4:
            sapXepMangTangDanTheoDong();
            break;
        case 5:
            sapXepMangTangDanTheoCot();
            break;
        case 6:
            tinhtongtheoDong();
            break;
        case 7:
            tinhtongtheoCot();
            break;
        case 8:
            spiralFill();
            break;
        case 9:
            spiralFillRighttoLeft();
            break;
        case 10:
            return;
        default:
            cout << "Lua chon khong hop le. Vui long chon lai." << endl;
            break;
    }
}