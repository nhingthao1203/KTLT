#include<iostream>
#include<string>
using namespace std;

string Binary(int n, string binary)
{
    if (n <= 0)
        return binary;
    else
    {
        binary = to_string(n % 2) + binary;
        return Binary(n / 2, binary);
    }
}

int main()
{
    int n;
    cout << "Nhap vao n:";
    cin >> n;
    string str = "";
    cout << "Chuyen sang he nhi phan la:";
    cout << Binary(n, str) << endl; 
}
