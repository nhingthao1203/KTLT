#include<iostream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct NhanVien {
	string MaSo, HoTen;
	double Salary;
	bool Sex;
};
int main() {
	ifstream inSV;
	inSV.open("data.txt");
	if (inSV.is_open())
	{
		for (int i = 0; i <= n - 1; i++)
		{
			string HoTen, MaSo;
			getline(inSV, MaSo, '%');
			getline(inSV, HoTen, '%');
			
			
		}
	}
    return 0;
}