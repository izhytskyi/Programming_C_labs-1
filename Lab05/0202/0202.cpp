#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char line[300]{};
    cin.getline(line, 300);

    char* fwe = strchr(line, ' ');
    char* lwr = strrchr(line, ' ');

    if (!fwe || !lwr)
        return 0;

    char result[300]{};
    strcat(result, lwr + 1 );
    strncat(result, fwe, lwr - fwe + 1 );
    strncat(result, line, fwe - line);
    cout << result;
}