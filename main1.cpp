#include <iostream>
int print(int* array, int size);
int main()
{
	int arr_1[5] = { 1,2,3,4,5 };
	int arr_2[3] = { 0,2,7 };
	int arr_3[6] = { 6,7,6,7,6,7 };
	print(arr_1, sizeof(arr_1) / sizeof(int));
	print(arr_2, sizeof(arr_2) / sizeof(int));
	print(arr_3, sizeof(arr_3) / sizeof(int));
	return 0;
}

int print(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;
	return 0;
}