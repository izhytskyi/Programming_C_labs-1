#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>


using namespace std;

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
            cout << "���� ������: " << znak[i].zodiac  << " ";
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
    Output(n ,znak);
}
int main()
{
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