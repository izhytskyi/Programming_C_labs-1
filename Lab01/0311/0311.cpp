#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double R2, R1, S, pi;
    cout << "Enter R1" << endl;
    cin >> R1;
    cout << "Enter R2" << endl;
    cin >> R2;
    pi = 3.14;
    S = pi * (pow(R2, 2) - pow(R1, 2));
    if (R1 < R2)
    cout << S << endl;
    else if (R1 == R2)
    cout << "vonu rivni" << endl;
    else
    cout << "R1 bilshe R2" << endl;
    return 0;
}