#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "ukr");
    cout << "¬ведiть текст :";
    string str;
    getline(cin, str);
    for (int i = str.size() - 1; i > 0; i--) {
        if (str[i] == '.' && str[i - 1] == '.') str.erase(i, 1);
    }
    cout << str << endl;
}