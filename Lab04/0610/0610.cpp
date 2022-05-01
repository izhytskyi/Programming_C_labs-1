#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int NxM[10][10], i, j,m,n;
    cout << "Введіть кількість рядків і стовпців:" << endl;
    cout << "Кількість рядків = ";
    cin >> m;
    cout << "Кількість стовпців = ";
    cin >> n;
    srand((unsigned)time(NULL));
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if(NxM[i]!=0)
            NxM[i][j] = 10 * rand() / RAND_MAX;
        }

    }
    cout << "Матриця : " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(5) << NxM[i][j];
        cout << endl;
    }
    if (NxM[i][j] == 0)"Не зупиняється";
        
}
