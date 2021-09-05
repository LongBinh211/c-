#include<iostream>
#include<string>
using namespace std;
class Phanso {
	int tu;
	int mau;
public:
	Phanso() {
		tu = 0;
		mau = 0;
	}
	Phanso(int a, int b) {
		tu = a;
		mau = (b == 0) ? 1 : b;
	}
	void showInfor() {
		cout << tu << "/" << mau << endl;
	}
	Phanso operator + (Phanso const&);
	Phanso operator * (Phanso const&);
	friend Phanso operator - (Phanso const&, Phanso const&);
	friend Phanso operator % (Phanso const&, Phanso const&);
};
Phanso Phanso::operator+(Phanso const& b) {
	Phanso s;
	s.tu = tu * b.mau + mau * b.tu;
	s.mau = mau * b.mau;
	return s;
}
Phanso operator-(Phanso const& a, Phanso const& b)
{
	Phanso s;
	s.tu = a.tu * b.mau - a.mau * b.tu;
	s.mau = a.mau * b.mau;
	return s;
}
Phanso Phanso::operator*(Phanso const& a)
{
	Phanso s;
	s.tu = tu * a.tu;
	s.mau = mau * a.mau;
	return s;
}
int main()
{
	Phanso a(10, 5);
	Phanso b(6, 7);
	Phanso c = a + b;
	Phanso d = a - b;
	Phanso e = a * b;
	c.showInfor();
	d.showInfor();
	e.showInfor();
}