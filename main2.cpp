#include<iostream>;
void swap(int* number_1, int* number_2);
int main()
{
	int a = 5, b = 8;
	std::cout << "a = " << a << ", " << "b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", " << "b = " << b << std::endl;
	return 0;
}
void swap(int* number_1, int* number_2)
{
	int number = *number_1;
	*number_1 = *number_2;
	*number_2 = number;
}