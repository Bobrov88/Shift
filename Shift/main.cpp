#include <iostream>
using namespace std;

#define offset "\t\t\t\t"

void main()
{
	setlocale(LC_ALL, "");
	int array_size, shift, temp;
	cout << offset << "¬ведите размер массива: "; cin >> array_size;
	int* array = new int[array_size];
	for (int i = 0; i < array_size; i++)
	{
		cout << offset << "Ёлемент #" << i + 1 << " -> "; cin >> array[i];
	}
	cout << offset << "Ќа сколько сдвинем? "; cin >> shift;
	for (int j = 0; j < shift; j++)
	{
		temp = array[array_size - 1];
		for (int i = array_size-1; i > 0; i--)
		{
			array[i] = array[i - 1];
		}
		array[0] = temp;
	}
	cout << endl << offset;
	for (int i = 0; i < array_size; i++)
	{
		cout << array[i] << " ";
	}
}