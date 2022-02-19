#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double num1,num2,result,sa,sg;
	cout << "Enter num1" << endl;
	cin >> num1;
	cout << "Enter num2" << endl;
	cin >> num2;
    sg = sqrt(pow(num1, 3)) * sqrt(pow(num2, 3));
	sa = (pow(num1, 2) + pow(num2, 2)) / 2;
	result = sg + sa;
	cout << "Answer = " << result << endl;

}