#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    float f, a = 0;
    cout << "¬вед≥ть д≥йсне число a: ";
    cin >> a;
    if (a < -1)
        f = 0;
    else
        if (a < 1)
            f = a / a;
        else f =  0;
    cout << "f(a) = " << f;
    return 0;
}