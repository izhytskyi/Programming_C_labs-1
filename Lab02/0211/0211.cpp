#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x;
	cout << "Enter x" << endl;
	cin >> x;
	cout << 1 / pow(x, 2) - 2*x - 10 << endl;
}