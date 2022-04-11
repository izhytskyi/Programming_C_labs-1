#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double y, x;
	cout << "Enter x" << endl;
	cin >> x;
	double* py = &y;
	double* px = &x;
	*py = tan(*px) + (5 * pow(*px, 3)) - (4 * pow(*px, 2));
	cout << "y = " << * py;
}
