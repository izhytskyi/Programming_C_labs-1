#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int m, n, i, j;
    cout << "Введіть кількість рядків і стовпців:" << endl;
        cout << "Кількість рядків = ";
        cin >> m;
        cout << "Кількість стовпців = ";
        cin >> n;

    int** B = new int* [m];
    cout << "Введіть елементи матриці :" << endl;
    for (i = 0; i < m; i++)
    {
        B[i] = new int[n];
        for (j = 0; j < n; j++)
        {
            cout << "B[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> B[i][j];
        }
        cout << endl;
    }

    cout << "Матриця : " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(5) << B[i][j];
        cout << endl;
    }

    for (j = 0; j < n; j++)
    {
        int min;
        for (i = 0; i < m; i++)
        {
            if (i == 0 || min > B[i][j])
                min = B[i][j];
        }
        cout   << "Cj" << j+1 <<" j= "<< min << endl;
    }
    for (i = 0; i < n; i++)
        delete[] B[i];
    delete[] B;
}