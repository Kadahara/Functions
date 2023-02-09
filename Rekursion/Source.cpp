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
	//cout << "Для выхода нажмите Ecs, для продолжение нажмите любую клавишу" << endl;
	//if (_getch() != 27)main();
	int n;
	cout << "Введите номер этажа: "; cin >> n;
	elevator(n);
#endif
	int n;
	cout << "Число которое хотите возвести в факториал: "; cin >> n;
	cout << factorial(n);
 }
void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << " Вы на " << floor << "м Этаже" << endl;
	elevator(floor - 1); //Рекурсивный вызов функции
	cout << " Вы на " << floor << " Этаже" << endl;
}
int factorial(int n)
{
	if (n == 0)return 1;
	else return n * factorial(n - 1);
}
