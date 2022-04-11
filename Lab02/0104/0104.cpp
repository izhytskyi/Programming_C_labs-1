#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double X, Y, Z;
	cout << "Enter X" << endl;
	cin >> X;
	cout << "Enter Y" << endl;
	cin >> Y;
	cout << "Enter Z" << endl;
	cin >> Z; 
	if (abs(X) > pow(Y, 2) + pow(Z, 2))
    cout << "X = " << X << endl;
	else if (abs(Y) > pow(Z, 2) + pow(X, 2))
	cout << "Y = " << Y << endl;
	else if (abs(Z) > pow(X, 2) + pow(Y, 2))
	cout << "Z = " << Z << endl;
	else
	cout << "Немає числа, якого модуль більше суми інших двох квадратів" << endl;

}