#include <iostream>
#include<locale>

void reverse(int* array, int size);
void print(int* array, int size);

int main()
{
	setlocale(LC_ALL, "Russian");
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	std::cout << "До функции reverse: ";
	print(arr, sizeof(arr) / sizeof(int));
	reverse(arr, sizeof(arr) / sizeof(int));
	std::cout << "После функции reverse: ";
	print(arr, sizeof(arr) / sizeof(int));
	return 0;
}
void reverse(int* array, int size)
{
	int limit = size;
	int buffer = 0;
	if (size % 2 == 0)
		limit = size / 2;
	else
		limit = (size - 1) / 2;
	for (int i = 0; i < limit; i++)
	{
		buffer = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = buffer;
	}
}
void print(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
}