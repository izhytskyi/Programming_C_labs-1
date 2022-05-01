#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int A = 0, B = 0, i, j;
    cout << "Вводите размерность матрицы (должны больше 0):" << endl;
    while (A < 1 || B < 1)
    {
        cout << "A = ";
        cin >> A;
        cout << "B = ";
        cin >> B;
    }

    int** a = new int* [A];
    cout << "Вводите элементы матрицы:" << endl;
    for (i = 0; i < A; i++)
    {
        a[i] = new int[B];
        for (j = 0; j < B; j++)
        {
            cout << "a[" << i + 1 << "][" << j + 1 << "] = ";
            cin >> a[i][j];
        }
        cout << endl;
    }

    cout << "Матрица после ввода:" << endl;
    for (i = 0; i < A; i++)
    {
        for (j = 0; j < B; j++)
            cout << setw(5) << a[i][j];
        cout << endl;
    }

    for (j = 0; j < B; j++)
    {
        int minCol;
        for (i = 0; i < A; i++)
        {
            if (i == 0 || minCol > a[i][j])
                minCol = a[i][j];
        }
        cout << "Минимальное значение столбца " << j + 1 << ": " << minCol << endl;
    }

    for (i = 0; i < A; i++)
        delete[] a[i];
    delete[] a;

    cout << endl;
    system("pause");
    return 0;
}