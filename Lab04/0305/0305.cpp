#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n, k,r=0;
    k = 0;
    cout << "Rozmir Array = ";
    cin >> n;
    double* a = new double[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter a" << i + 1 << " = ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] != a[j] && i == j)
            {
                ++k;
            }
        }
            if (r != k)
            
                ++r;
            
        
    }
         
    cout << r;
}