#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    const int i = 5, j = 5;
    int A[j][i] =
    {
        { 1, 2, 3, 4, 5 },
        { 10, 9, 8, 7, 6 },
        { 11, 12, 13, 14, 15 },
        { 20, 19, 18, 17, 16 },
        { 21, 21, 23, 24, 25 }
    };
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(5) << A[i][j];
        }
        cout << endl;
    }
}