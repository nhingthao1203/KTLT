#include <iostream>

using namespace std;

class Diem
{
private:
		double x, y;
public:
		Diem() { x = y = 0; };
		~Diem() {};
		void setDiem(int a1, int b1);
		double geta1();
		double  getb1();
		int  tinhKhoangCach(Diem A, Diem B);
};
void Diem::setDiem(int a1, int b1)
{
	x = a1;
	y = b1;
}
double Diem::geta1 ()
{
	return x;
}
double Diem::getb1 ()
{
	return y;

}
double tinhKC(Diem a, Diem b)
{
	double kc;
	kc = sqrt((a.geta1() - b.geta1()) * (a.geta1() - b.geta1()) + (a.getb1() - b.getb1()) * (a.getb1() - b.getb1()));
	return kc;
}
int main()
{
	Diem A, B;
	int c, d;
	cout << "Nhap vao diem A:\n";
	cout << "x:";
	cin >> c;
	cout << "\ny:";
	cin >> d;
	A.setDiem(c, d);
	cout << "Nhap vao diem B:\n";
	cout << "x:";
	cin >> c;
	cout << "\ny:";
	cin >> d;
	B.setDiem(c, d);
	cout << "\nKhoang cach giua hai diem A va B =" << tinhKC(A, B);






}