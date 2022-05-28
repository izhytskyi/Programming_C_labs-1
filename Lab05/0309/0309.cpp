#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int main() {
    string str; 
    int d = 1;
    int max = 0;
    int num = 0;
    int max1 = 0;
    cout << "Enter string: "; 
    getline(cin, str); 
    for (unsigned int i = 0; i <= str.length(); i++) {
        if (isdigit(str[i])) {
            d = str[i] - 48; 
            if ((d >= 0) && (d < 10)) { 
                num = num * 10 + d; 
              
            }
        }
        
        else {
            if (num > 0&& max<num)
            {
                max = num;
            }
            num = 0;
        }
    }
   
    cout << "Max = " << max << endl; 

}