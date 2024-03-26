#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int binaryToDecimal(string str, int index)
{
    if (str.empty() || index < 0)
        return 0;

    return (str.back() - '0') * pow(2, index) + binaryToDecimal(str.substr(0, str.length() - 1), index - 1);
}

int main()
{
    string binary;
    cout << "Nhap vao chuoi nhi phan cua ban: ";
    cin >> binary;

    int index = binary.length() - 1;

    int decimal = binaryToDecimal(binary, index);

    cout << "Gia tri thap phan: " << decimal << endl;

    return 0;
}
