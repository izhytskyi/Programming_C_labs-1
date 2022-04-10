#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  float n, i,a, s = 1;
  cout << "Enter a" << endl;
  cin >> a;
  cout << "Enter n" << endl;
  cin >> n; 
  for (i = 1; i <= n; i++)
  s = s * (a + i);
  cout << "Result = " << s << endl;
}