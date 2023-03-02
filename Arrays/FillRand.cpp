#include"FillRand.h"
template<typename T>
void FillRand(T arr[], const int n)
{
	//Заполнение массива случайными числами.
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

template<typename T>void FillRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	//заполнение двумерного массива случайными числами 
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
