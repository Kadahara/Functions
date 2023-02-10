#include<iostream>
using namespace std;
void elevator(int floor);
int factorial(int n);
int fib(int n);

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
	int num, num_max;
	int n;
	cout << "����� ������� ������ �������� � ���������: "; cin >> n; 
	cout << "��� �� ����� �� ���� ��������: "; cin >> num;
	cout << "���������� ����� �� ���� ��������: "; cin >> num_max;
	cout << factorial(n) << endl;
	//cout << fib(num);
	for (int i = 1; i <= num; i++)
	{
	cout << fib(i) << "\t";
	}
	cout << endl;
	for (int i = 1; fib(i) <= num_max; i++)
	{
		cout << fib(i) << "\t";
	}

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
int fib(int num)
{
	if (num < 1)
	{
		return 0;
	}
	if (num == 1)
	{
		return 1;
	}
	return fib(num - 1) + fib(num - 2);
}
