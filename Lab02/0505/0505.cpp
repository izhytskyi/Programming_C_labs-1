#include <iostream>
#include <cmath>
#include <locale>

using namespace std;


int main()
{
	setlocale(LC_CTYPE, "ukr");
	int x;
	cout << "¬вед≥ть в≥д 1 до 12" << endl;
	cin >> x;
	if (x == 1)
	cout << "—≥чень Ц 31 день" << endl;
	else 
	if (x == 2)
	cout << "Ћютий Ц 28 дн≥в у звичайному роц≥ ≥ 29 дн≥в у високосн≥" << endl;
	else
	if (x == 3)
	cout << "Ѕерезень Ц 31 день" << endl;
	else
	if (x == 4)
	cout << " в≥тень Ц 30 дн≥в" << endl;
	else
	if (x == 5)
	cout << "“равень Ц 31 день" << endl;
	else
	if (x == 6)
	cout << "„ервень Ц 30 дн≥в" << endl;
	else
	if (x == 7)
	cout << "Ћипень Ц 31 день" << endl;
	else
    if (x == 8)
	cout << "—ерпень Ц 31 день" << endl;
	else
	if (x == 9)
	cout << "¬ересень Ц 30 дн≥в" << endl;
	else
	if (x == 10)
	cout << "∆овтень Ц 31 день" << endl;
	else
	if (x == 11)
	cout << "Ћистопад Ц 30 дн≥в" << endl;
	else
	if (x == 12)
	cout << "√рудень Ц 31 день" << endl;
	else 
	cout << "„исло х не входить в пром≥жок в≥д 1 до 12 =) " << endl;

}
	

