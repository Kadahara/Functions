#include<iostream>
using namespace std;
void elevator(int floor);
int factorial(int n);

//#define ELEVATOR

void main()
{
	setlocale(LC_ALL, "");
#if defined ELEVATOR
	//cout << "Hellow";
	//cout << "��� ������ ������� Ecs, ��� ����������� ������� ����� �������" << endl;
	//if (_getch() != 27)main();
	int n;
	cout << "������� ����� �����: "; cin >> n;
	elevator(n);
#endif
	int n;
	cout << "����� ������� ������ �������� � ���������: "; cin >> n;
	cout << factorial(n);
 }
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � �������" << endl;
		return;
	}
	cout << " �� �� " << floor << "� �����" << endl;
	elevator(floor - 1); //����������� ����� �������
	cout << " �� �� " << floor << " �����" << endl;
}
int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}
