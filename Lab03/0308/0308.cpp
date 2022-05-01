#include <iostream>
#include <math.h>

    using namespace std;

    int main(){
        
        int a, b;
        cout << "Enter a = ";
        cin >> a;
        cout << "Enter b = ";
        cin >> b;
        int* ptra = &a;
        int* ptrb = &b;

        if (a < b) {

            a = *ptra + 12;
            cout << "Result a = " << a << endl;
            b = *ptrb - 6;
            cout << "Result b = " << b << endl;
        }
        else {
            b = *ptrb + 12;
            cout << "Result b = " << b << endl;
            a = *ptra - 6;
            cout << "Result a = " << a << endl;

        }
}