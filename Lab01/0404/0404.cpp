#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double V1, V2, T, S, S1, S2, Ss;
	cout << "Enter V1 (km/h)" << endl;
	cin >> V1;
	cout << "Enter V2 (km/h)" << endl;
	cin >> V2;
	cout << "Enter S (km)" << endl;
	cin >> S;
	cout << "Enter T (h)" << endl;
	cin >> T;
	S1 = V1 * T;
	S2 = V2 * T;
	Ss=  S1 + S2 + S;
	cout <<"Vidstan avtomobiliv is "<< Ss <<" km " <<endl;
	return 0;
}