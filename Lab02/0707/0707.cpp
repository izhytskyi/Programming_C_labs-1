#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n, a, s = 1;
	cout << "Enter n = ";
	cin >> n;
	for (int i = 0; i < n; i++) {

		cout << "Enter a" << i + 1 << "= ";
		cin >> a;
	}
	for (int j = 1; j <= n; j++) {
		s = s * (a + j);
	}
	cout << "Result = " << s;
	return 0;
}