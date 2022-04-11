#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long x, n, summ;
	cout << "Enter n" << endl;
	cin >> n;
	cout << "Enter x" << endl;
	cin >> x;
	summ = n * pow(x,2 * n);
	cout << summ << endl;
}