#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{

    int n, k, r = 0;
    cout << "Rozmir Array = ";
    cin >> n;
    double* a = new double[n];
    for (int i = 0; i < n; ++i)
    {
        cout << "Enter a" << i + 1 << " = ";
        cin >> a[i];
    }
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[j]++;
                    flag = false;
                break;
            }
        }
        if (flag)
            a[r] = a[i];
            ++r;
        for (int i = 0; i < n; i++) {
            if (a[i] > 1)
                cout << a[i],r;
        }

    }
}