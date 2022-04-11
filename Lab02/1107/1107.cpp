#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long int i, n;
	double x, Summ;
	Summ = 3.14 / 2;

	cout << "x=";
	cin >> x;

	cout << "n=";
	cin >> n;

	for (i = 1; i <= n; i++) {
		Summ = Summ + (pow(-1, i + 1)+pow(x,2*n+1)) / 2 * i + 1;
	}
	cout << Summ << endl;
}
