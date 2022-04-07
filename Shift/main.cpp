#include <iostream>
using namespace std;

#define offset "\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "");
	int array_size, shift, temp_1, temp_2;
	cout << offset << "¬ведите размер массива: "; cin >> array_size;
	int* array = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << offset << "Ёлемент #" << i + 1 << " -> "; cin >> array[i];
	}
	cout << offset << "Ќа сколько сдвинем? "; cin >> shift;
	for (int j = 0; j < shift; j++)
	{
		temp_1 = array[array_size - 1];
		for (int i = 0; i < array_size-1; i++)
		{
			temp_2 = array[i+1];
			array[i + 1] = array[i];
			array[i] = temp_1;
			temp_1 = temp_2;
		}
	}
	cout << endl << offset;
	for (int i = 0; i < array_size; i++)
	{
		cout << array[i] << " ";
	}
}