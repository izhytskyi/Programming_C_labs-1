#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ukr");

    int NxM[10][10], i, j,m,n,sum=0;
    cout << "Введіть кількість рядків і стовпців:" << endl;
    cout << "Кількість рядків = ";
    cin >> n;
    cout << "Кількість стовпців = ";
    cin >> m;
    srand((unsigned)time(NULL));
    for (j = 0; j < m; j++) {
        for (i = 0; i < n; i++) {
            NxM[j][i] = 2 * rand() / RAND_MAX; 
        }    
    }
    cout << "Матриця : " << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
            cout << setw(5) << NxM[i][j];
        cout << endl;
      
    }
    int sum_i = 0, sum_j = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
         sum =   (NxM[i][j] + NxM[sum_i][sum_j]);
    if(sum>1)
        sum_i = i; 

    cout << NxM[i][j] << sum_i;
    
}
