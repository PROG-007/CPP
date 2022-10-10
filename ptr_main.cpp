#include <iostream>
using namespace std;

void print(int*, int);
int* applyall(int*, int, int*, int);

int main()
{
	int sizelist_1{ 5 };
	int sizelist_2{ 3 };
	int list_1[]{ 1, 2, 3, 4, 5 };
	int list_2[]{ 10, 20, 30 };

	cout << "\n1st Array's data: " << endl;
	print(list_1, 5);
	cout << "\n2nd Array's data: " << endl;
	print(list_2, 3);
	cout << endl;
	int* array_3 = applyall(list_1, sizelist_1, list_2, sizelist_2);
	int sizelist_1_andlist_2{ sizelist_1 * sizelist_2 };
	cout << "\n3rd Array's data: " << endl;
	print(array_3, sizelist_1_andlist_2);
	delete[] array_3;
	return 0;
}
void print(int* array, int size_array)
{
	cout << "[ ";
	for (int i{ 0 }; i < size_array; i++)
		cout << array[i] << " ";
	cout << "]";
}
int* applyall(int* array, int size_array, int* array1, int size_array1)
{
	int* list_3_ptr{};
	int prod{ size_array * size_array1 };
	int index{ 0 };
	list_3_ptr = new int[prod] {};
	for (int i{ 0 }; i < size_array1; i++) {
		for (int j{ 0 }; j < size_array; j++) {
			int l{ array1[i] * array[j] };
			*(list_3_ptr + index) = l;
			index++;
		}

	}
	return list_3_ptr;
}