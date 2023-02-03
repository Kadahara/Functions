#include<iostream>
using namespace std;

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void Sort(int arr[], const int n);

int Sum(int arr[], const int n);
double Sum(double arr[], const int n);

double Avg(int arr[], const int n);
double Avg(double arr[], const int n);

int minValueIn(int arr[], const int n);
int maxValueIn(int arr[], const int n);

void main()
{
	setlocale(LC_ALL, "Rus");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма чисел: " << Sum(arr, n) << endl;
	cout << "Среднее арефметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(arr, n) << endl;
	
	//____________________________________________________________________
	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr,SIZE);
	Print(brr, SIZE);
	cout << "Сумма чисел: " << Sum(brr, n) << endl;
	cout << "Среднее арефметическое : " << Avg(brr, n) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, n) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, n) << endl;


	//__________________________________________________________________________






	

	
}

void FillRand(int arr[], const int n)
{
	//Заполнение массива случайными числами.
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	//Вывод
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	//сортировка
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

//Сумма
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}


//Ср. ареф.
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

//Минимальное значение
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

//максимальное значение
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

