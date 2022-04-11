#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long n, d = 0;
    double x, a, cos_a,sum = 0;
    cout << "x=";
    cin >> x;
    cout << "n=";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        cout << "a" << k  << "=";
        cin >> a; 
        sum = sum + a;
        cos_a = cos(sum);
        cout << cos_a << endl;
        if (x == cos_a)
        d++;
    }
    cout << d << endl;
}