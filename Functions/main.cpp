#include<iostream>
using namespace std;

int sum(int a, int b)
{
	int c = a + b;
	return c;
}
int Difference(int a, int b)
{
	return a - b;
}
int Product(int a, int b)
{
	return a * b;
}
int Quotient(int a, int b)
{
	return a / b;
}

void main()
{
	setlocale(LC_ALL, "");

	int a, b;
	cout << "¬ведите два числа: "; cin >> a >> b;
	int c = sum(a, b);
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Difference(a, b) << endl;
	cout << a << " * " << b << " = " << Product(a, b) << endl;
	cout << a << " / " << b << " = " << Quotient(a, b) << endl;
	



}