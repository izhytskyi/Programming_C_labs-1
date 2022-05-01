#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");

	int i, j, nom = 0, m, n;
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
			cout  << setw(5) << B[i][j];
		cout << endl;
	}
	int max_i = 0, max_j = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (B[i][j] > B[max_i][max_j])
			{
				max_i = i; max_j = j; 
			}
	
	cout << "Максимальний елемент = " << B[max_i][max_j] << ", його номер = " << max_i+1 << endl;

}

