#include<iostream>
using namespace std;

void elevator(int floor);
int factorial(int n);
int fib(int n);
double power(double a, int n);
void fibonahi(int n, int a = 0, int b = 1);

//#define MAIN
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
#if defined MAIN
	int num, num_max, n, i;
	cout << "Число которое хотите возвести в факториал: "; cin >> n;
	cout << "Кол во чисел из ряда фибоначи: "; cin >> num;
	cout << "Предельное число из ряда фибоначи: "; cin >> num_max;
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
	cout << endl;
	double a;
	cout << "Введите основание степени: "; cin >> a;
	cout << "Введите показатель степени: "; cin >> i;
	cout << a<< " в степени "<< i << " = " << power(a, i) << endl;

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
double power(double a, int i)
{
	/*if (i == 0)return 1;
	else if (i > 0) return a * power(a, i - 1);
	else return 1 / a * power(a, i + 1);*/
	//return i == 0 ? 1 : i > 0 ? a * power(a, i - 1) : 1 / a * power(a, i + 1);
	return i == 0 ? 1 : i > 0 ? a * power(a, i - 1) : 1 / power(a, -i);
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
#endif
	int n;
	cout << "Введите предельное число: "; cin >> n;
	fibonahi(n);


}
void fibonahi(int n, int a, int b)
{
	if (a > n)return;
	cout << a << "\t";
	fibonahi(n, b, a + b);
}
