#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"



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
	double brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr,SIZE);
	Print(brr, SIZE);
	cout << "Сумма чисел: " << Sum(brr, SIZE) << endl;
	cout << "Среднее арефметическое : " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение: " << maxValueIn(brr, SIZE) << endl;

	//__________________________________________________________________________

	cout << "Вывод матрицы с помощью двумернного массива" << endl;
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl ;
	cout << "Среднее арефметическое: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	//______________________________________________________________________________

	cout << "Вывод матрицы с помощью двумернного массива" << endl;
	double b_arr_2[ROWS][COLS];
	FillRand(b_arr_2, ROWS, COLS);
	Print(b_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(b_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арефметическое: " << Avg(b_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение: " << minValueIn(b_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение: " << maxValueIn(b_arr_2, ROWS, COLS) << endl;
	
}


