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
	cout << "����� �����: " << Sum(arr, n) << endl;
	cout << "������� ��������������: " << Avg(arr, n) << endl;
	cout << "����������� ��������: " << minValueIn(arr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(arr, n) << endl;
	
	//____________________________________________________________________
	const int SIZE = 8;
	int brr[SIZE];

	FillRand(brr, SIZE);
	Print(brr, SIZE);
	Sort(brr,SIZE);
	Print(brr, SIZE);
	cout << "����� �����: " << Sum(brr, n) << endl;
	cout << "������� �������������� : " << Avg(brr, n) << endl;
	cout << "����������� ��������: " << minValueIn(brr, n) << endl;
	cout << "������������ ��������: " << maxValueIn(brr, n) << endl;


	//__________________________________________________________________________






	

	
}

void FillRand(int arr[], const int n)
{
	//���������� ������� ���������� �������.
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void Print(int arr[], const int n)
{
	//�����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void Sort(int arr[], const int n)
{
	//����������
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

//�����
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}


//��. ����.
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

//����������� ��������
int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

//������������ ��������
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

