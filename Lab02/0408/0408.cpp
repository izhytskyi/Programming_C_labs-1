#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, x, c, F ;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter x" << endl;
    cin >> x;
    cout << "Enter c" << endl;
    cin >> c;
    if (c < 0 && a != 0)
        F = (- a * pow(x, 2));
    else if (c > 0 && a == 0)
        F = ((x - a) / c * x);
    else
        F = x / c;

    cout << "Result = " << F << endl;
}
