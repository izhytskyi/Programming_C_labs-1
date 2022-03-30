#include <iostream>
#include <cmath>
using namespace std;

int main()
{   
    double i, s=1;
    for ( i = 0.1;i <= 10;i += 0.1)
    s = s * (100 + 10 * cos(i));
    cout << "Result = " << s;
   
}