#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");
    int n, r = 0;
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
            if (a[i] == a[i+1])
            {
                r ++;
            }
    }
    cout << "Кількість членів, що входить у послідовність більше одного разу = " << r;
}