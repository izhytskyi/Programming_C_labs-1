#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double a, b;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	double * pa = &a;
	double * pb = &b;
	if (a > b)
		cout << "a = " << *pa * 2;
	else
		cout << "b = " << *pb / 2;
	
	
}