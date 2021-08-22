#include<iostream>
#include<time.h>


using namespace std;


void CreatArrInt(int arr[], const int size, const int range)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % range;
	}
}
void CreatArrDouble(double arr[], const int size, const int range)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % range / (10 + 0.002);
	}
}
void CreatArrChar(char arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 256;
	}
}

void  ShowArrInt(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void  ShowArrDouble(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}
void  ShowArrChar(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}

int MinInt(int arr[], int size)
{
	int min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� ����� � �������: ";
	cout << min;
	return min;
}
double MinDouble(double arr[], int size)
{
	double min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� ����� � �������: ";
	cout << min;
	return min;
}
char MinChar(char arr[], int size)
{
	char min = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "����������� ������ � �������: ";
	cout << min;
	return min;
}

int MaxInt(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "������������� ����� � �������: ";
	cout << max;
	return max;
}
double MaxDouble(double arr[], int size)
{
	double max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "������������� ����� � �������: ";
	cout << max;
	return max;
}
char MaxChar(char arr[], int size)
{
	char max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	cout << "������������� ������ � �������: ";
	cout << max;
	return max;
}

void SortInt(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
			}
		}		
	}
	
}
void SortDouble(double arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}
void SortChar(char arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				swap(arr[j - 1], arr[j]);
			}
		}
	}
}

void EditInt(int arr[], int size)
{
	int index, element;
	cout << "������� ����� �������� ������� ������ ��������: ";
		cin >> index;
		cout << "\n ������� ������� �� ������� ������ ��������:";
		cin >> element;

	if (index < 0 || index >= size)
	{
		cout << "������ �������� ���";
	}
	else
		 arr[index]=element;
		
}
void EditDouble(double arr[], int size)
{
	int index;
	double element;
	cout << "������� ����� �������� ������� ������ ��������: ";
	cin >> index;
	cout << "\n ������� ������� �� ������� ������ ��������:";
	cin >> element;

	if (index < 0 || index >= size)
	{
		cout << "������ �������� ���";
	}
	else
		arr[index] = element;

}
void EditChar(char arr[], int size)
{
	int index;
	char element;
	cout << "������� ����� �������� ������� ������ ��������: ";
	cin >> index;
	cout << "\n ������� ������� �� ������� ������ ��������:";
	cin >> element;

	if (index < 0 || index >= size)
	{
		cout << "������ �������� ���";
	}
	else
		arr[index] = element;

}





/*������� 1:
������� ������ � ������� :
1. ������� ��� �����: ( function.h , function.cpp , prog.cpp )
2. � ����� function.cpp ���������� �������� ��������� ������� ��� ������ � ��������
������:
�) ������� ��� ���������� ������� ���������� ���������� ;
�) ������� ��� ������ �������� ������� �� ������� ;
�) ������� ��� ������ ������������ ��������;
�) ������� ��� ������ ������������� ��������;
�) ������� ��� ���������� ;
�) ������� ��� �������������� �������� �������.
������ ������� ���������� �������� ��� ������ � �������� �����, �������������� �
���������� ��������. (��� ������� ���� �������� ��������� �������) .*/