#include <iostream>
#include <cmath>

using namespace std;

int main()
{

	double dyim, dovs,num1;
	cout << "Enter dyim" << endl;
	cin >> num1;
	dyim = 0.0254;
	dovs = num1 * dyim;
	cout << dovs << " meters"<<endl;

} 