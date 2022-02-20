#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	float a, b, alf, bet, c, d, z1, z2;
	cout << "Enter alfa" << endl;
	cin >> alf;
	cout << "Enter beta" << endl;
	cin >> bet;
	a = pow(cos(alf) - cos(bet), 2);
	b = pow(sin(alf) - sin(bet), 2);
	z1 = a - b;
	c =(-4) * pow(sin((alf - bet) / 2),2);
	d = cos(alf + bet);
	z2 = c * d;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	return 0;
}