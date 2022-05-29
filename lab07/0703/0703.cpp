#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>

using namespace std;

int lab1_1()
{
	double num1, num2, result, sa, sg;
	cout << "Enter num1" << endl;
	cin >> num1;
	cout << "Enter num2" << endl;
	cin >> num2;
	sg = sqrt(pow(num1, 3)) * sqrt(pow(num2, 3));
	sa = (pow(num1, 2) + pow(num2, 2)) / 2;
	result = sg + sa;
	cout << "Answer = " << result << endl;
	return 0;

}
int lab1_2() {
	setlocale(LC_CTYPE, "ukr");
	double dyim, dovs, num1;
	cout << "Enter dyim" << endl;
	cin >> num1;
	dyim = 0.0254; /*1 dyim eto 0.0254 metra*/
	dovs = num1 * dyim;
	cout << dovs << " meters" << endl;
	return 0;
}
int lab2_2() {
	double x;
	cout << "Enter x" << endl;
	cin >> x;
	cout << 1 / (pow(x, 2) - 2 * x - 10) << endl;

	return 0;
}
int lab2_4() {
	double a, x, c, F;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter x" << endl;
	cin >> x;
	cout << "Enter c" << endl;
	cin >> c;
	if (c < 0 && a != 0)
		F = (-a * pow(x, 2));
	else if (c > 0 && a == 0)
		F = ((x - a) / c * x);
	else
		F = x / c;

	cout << "Result = " << F << endl;
	return 0;
}
int lab3() {
	double a, b;
	cout << "Enter a" << endl;
	cin >> a;
	cout << "Enter b" << endl;
	cin >> b;
	double* pa = &a;
	double* pb = &b;
	if (a > b)
		cout << "a = " << *pa * 2;
	else
		cout << "b = " << *pb / 2;

	return 0;
}
int lab4_1() {
	float A[30], B[30];
	double Rez;
	cout << "array A :";
	for (int i = 0; i < 30; i++) {
		A[i] = 30 - ((float)rand() / RAND_MAX) * 60;
		cout << (A[i]) << endl;
	}
	cout << "array B :";
	for (int i = 0; i < 30; i++) {
		B[i] = 30 - ((float)rand() / RAND_MAX) * 60;
		cout << (B[i]) << endl;
	}
	Rez = 1;
	for (int i = 1; i <= 30; i++) {
		Rez = Rez * (A[i] + B[31 - i]);
	}
	cout << "Result = " << Rez << endl;
	return 0;
}
int lab4_2() {
	double summ = 0, avrg = 1;
	unsigned int n = 0;
	cout << "Rozmir Array = ";
	cin >> n;
	double* a = new double[n];
	for (int i = 0; i < n; ++i)
	{
		cout << "Enter a" << i + 1 << " = ";
		cin >> a[i];

		summ = summ + a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		avrg = summ / n;
		if (a[i] <= avrg && a[i] >= 0) {
			a[i] = 0.1;
		}
		else
		{
			a[i] = a[i];
		}
		if (a[i] < 0) {
			a[i] = a[i] + 0.5;
		}

	}
	for (int i = 0; i < n; i++) {
		cout << "(" << a[i] << ")";
	}

	return 0;
}
int lab5() {
	   setlocale(LC_CTYPE, "ukr");
    cout << "����i�� ����� :";
    string str;
    getline(cin, str);
    for (int i = str.size() - 1; i > 0; i--) {
        if (str[i] == '.' && str[i - 1] == '.') str.erase(i, 1);
    }
    cout << str << endl;
	cout << endl;
	return 0;
	
}

struct ZNAK
{
	char name[10];
	char lastname[10];
	string zodiac;
	char Birthday[10];
	struct
	{
		unsigned int day, month, year;
	} birthday;
};
void Input(int n, ZNAK* znak)
{
	setlocale(LC_CTYPE, "ukr");
	for (int i = 0; i < n; i++)
	{
		cout << "����i�� i�'�: "; cin >> znak[i].name;
		cout << "����i�� ��i�����: "; cin >> znak[i].lastname;
		cout << "����i�� ���� ������: "; cin >> znak[i].zodiac;
		cout << "����i�� ���� ����������: "; cin >> znak[i].birthday.day;
		cout << "����i�� ����� ����������: "; cin >> znak[i].birthday.month;
		cout << "����i�� �� ���������� ����: "; cin >> znak[i].birthday.year;
		cout << endl;
	}
	cout << endl;
}
void Output(int n, ZNAK* znak)
{
	setlocale(LC_CTYPE, "ukr");
	for (int i = 0; i < n; i++)
	{
		cout << "i�'�: " << znak[i].name << " ";
		cout << "��i�����: " << znak[i].lastname << " ";
		cout << "���� ������: " << znak[i].zodiac << " ";
		cout << "���� ����������: " << znak[i].birthday.day << " ";
		cout << "����� ����������: " << znak[i].birthday.month << " ";
		cout << "�� ����������: " << znak[i].birthday.year << " ";
		cout << endl;
	}
	cout << endl;
}
void Fam(int n, ZNAK* znak, string fam)
{
	setlocale(LC_CTYPE, "ukr");
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (fam == znak[i].lastname)
		{
			cout << "i�'�: " << znak[i].name << " ";
			cout << "��i�����: " << znak[i].lastname << " ";
			cout << "���� ������: " << znak[i].zodiac << " ";
			cout << "���� ����������: " << znak[i].birthday.day << " ";
			cout << "����� ����������: " << znak[i].birthday.month << " ";
			cout << "�� ����������: " << znak[i].birthday.year << " ";
			cout << endl;
		}
		else count++;
		if (count == n) cout << "����� ����" << endl;
	}
}
void Sort(int n, ZNAK* znak)
{
	setlocale(LC_CTYPE, "ukr");
	ZNAK buf;

	for (int i = 0; i < n - 1; i++)
	{

		for (int g = i + 1; g < n; g++)
		{
			if (znak[i].birthday.year * (20 * 50) + znak[i].birthday.month * 20 + znak[i].birthday.day > znak[g].birthday.year * (20 * 50) + znak[g].birthday.month * 20 + znak[g].birthday.day)
			{
				buf = znak[i];
				znak[i] = znak[g];
				znak[g] = buf;
			}
		}
	}
	cout << "�i���������� ���������: " << endl;
	Output(n, znak);
}
int lab6() {
	
	
		setlocale(LC_CTYPE, "ukr");
		int n;
		cout << "����i�� ����i� ����: "; cin >> n;
		ZNAK* znak = new ZNAK[n];
		Input(n, znak);
		Output(n, znak);
		string fam;
		cout << "����i�� ��i�����, ��� ������� �����i����: "; cin >> fam;
		Fam(n, znak, fam);
		Sort(n, znak);
		_getch();
		return 0;
	
}

int counter;
int combin(int n, int k)
{
	if ((n == k) || (k == 0)) { counter++; return 1; }
	counter += 2;
	return combin(n - 1, k) + combin(n - 1, k - 1);
}
char* argv[];
int lab7()
{
	int argc;
	int n = 10, k = 3, c;
	counter = 0;
	c = combin(n, k);
	cout << "Answer:" << endl;
	cout << "C(" << n << "," << k << ")=" << c << ", counter=" << counter << endl;
	return 0;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "������ ������� ����������� ������ �1, ������ �1:"<< endl<< "���� ��� �����.������ ���� ���������� ������������� �� ���� � ���������� ������������� �� ��������. " << endl;
	lab1_1(); 
	cout <<  endl;
	cout << "������ ������� ����������� ������ �1, ������ �2: " << endl<<"������� ������ ������ � ������ (1 ���� = 2,54 ��). ��������� ������� �������� ������� � �������� �������" <<endl;
	lab1_2(); 
	cout << endl;
	cout << "������ ������� ����������� ������ �2, ������ �2: " << endl << "���� �������� ����� ��������.��������� 1 / (x^2 - 2x - 10)" << endl;
	lab2_2(); 
	cout <<  endl;
	cout << "������ ������� ����������� ������ �2, ������ �4: " << endl;
	lab2_4(); 
	cout << endl;
	cout << "������ ������� ����������� ������ �3: " << endl << " ������ �������� 2-� ����� ������ � � b. ��������� ��� ��������� �� �� ����. �� ��������� ��������� �������� �������� ����� � � 2 ���� ���� � > b ������ b �������� � 2 ����." << endl;
	lab3(); 
	cout << endl;
	cout << "������ ������� ����������� ������ �4, ������ �1: " << endl << "���� ���� ����� a1, a2, �, a30, b1, b2, �, b30. ��������� (a1 + b30)(a2 + b29)�(a30 + b1)." << endl;
	lab4_1(); 
	cout <<  endl;
	cout << "������ ������� ����������� ������ �4, ������ �2: " << endl << "����� ���� ���������� ����� n � ���� ����� �1, �, �n. � ����������� �1, �, �n �� �䒺�� ����� ������� �� 0, 5, � �� ���䒺��, ����� ���������� �������������, ������ �� 0, 1." << endl;
	lab4_2(); 
	cout << endl;
	cout << "������ ������� ����������� ������ �5: " << endl << "� ������ ����� �� ����������� ������ ������� �� ���� ������" << endl;
	lab5(); 
	cout << "������ ������� ����������� ������ �6: " << endl << "������� ��������� � ��'�� ZNAK, �� ������ ������� ����:������ ������ ���� ����������� �� ����� ����������" << endl;
	cout << endl;
	lab6(); 
	cout << endl;
	cout << "������� ���������� ������� Combin1 (N, K) ������ ����, ��� ��������� C(N, K) - ����� ������� � N �������� �� K - �� ��������� ������������ ������������ : C(N, 0) = C(N, N) = 1,C(N, K) = C(N � 1, K) + C(N � 1, K � 1) ��� 0 < K < N." << endl;
	lab7(); 
	cout<< endl;
}