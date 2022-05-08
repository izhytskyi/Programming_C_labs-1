#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int NxM[10][10], i, j, m, n, sum;
    cout << "Введіть кількість рядків і стовпців:" << endl;
    cout << "Кількість стовпців =";
    cin >> n;
    cout << "Кількість рядків = ";
    cin >> m;
    srand((unsigned)time(NULL));
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            NxM[i][j] = 2 * rand() / RAND_MAX;
        }
    }
    cout << "Матриця : " << endl;
    for (j = 0; j < m; j++)
    {
        for (i = 0; i < n; i++)
            cout << setw(5) << NxM[i][j];
        cout << endl;

    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += NxM[i][j];
        }
        if (sum > 1)
        {
            cout << "На зупинці j" << i + 1 << " зустрілися автобуси " << sum << ";" << endl;
        }
        else
            cout << "На зупинці j" << i + 1 << " не зустрілися автобуси" << endl;
    }
}