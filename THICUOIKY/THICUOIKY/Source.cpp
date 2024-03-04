#include<iostream>
using namespace std;

class GPG
{
private:
	int h, m, s;
public:
	GPG() { h = m = s = 0; };
	~GPG() {};
	void setGPG(int a, int b, int c);
	int geth();
	int getm();
	int gets();
	GPG tinhKhoangCach(GPG a, GPG b);
	GPG tinhKhoangCach(GPG a);

};
void GPG::setGPG(int a, int b, int c)
{
	h = a;
	m = b;
	s = c;
}
int GPG::geth()
{
	return h;
}
int GPG::getm()
{
	return m;

}
int GPG::gets()
{
	return s;

}
GPG GPG::tinhKhoangCach(GPG a, GPG b)
{
	int giaya = a.h * 3600 + a.m * 60 + a.s;
	int giayb = b.h * 3600 + b.m * 60 + b.s;
	int hieu = abs(giaya - giayb);
	GPG kq;
	kq.h = hieu / 3600;
	kq.m = (hieu % 3600) / 60;
	kq.s = hieu - kq.h * 3600 - kq.m * 60;
	return kq;
}
GPG GPG::tinhKhoangCach(GPG a)
{
	int giay = h * 3600 + m * 60 + s;
	int giaya = a.h * 3600 + a.m * 60 + a.s;
	int hieu = abs(giay - giaya);
	GPG kq;
	kq.h = hieu / 3600;
	kq.m = (hieu % 3600) / 60;
	kq.s = hieu - kq.h * 3600 - kq.m * 60;
	return kq;
}
int main()
{
	Poit 
}