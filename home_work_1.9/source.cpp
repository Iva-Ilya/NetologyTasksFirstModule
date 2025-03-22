#include <iostream>


// ��� ������ 1 - �������, � ������� �������� ������ �� ��������� � ������� �� �����. 
void print(int* number_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
	}

}

// ��� ������ 2 - �������, � ������� �������� ������ 2� ���������� � ��� � ��� ������ ��, ������� �������� ���� ����������. 
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

// ��� ������ 3 - �������, � ������ �������� ������ �� ���������, ������� ��������� �� ���� ������ ������������� ������� 
// � �������������� ��� � �������� ������� � �� ���� ������ ������� ���������� ��������� � ��������.. 

	void reverse(int* reverse_arr, int reverse_size)
	{
		std::cout << "�� ������� reverse: " << "\n";

		for (int i = 0; i < reverse_size; ++i)
		{
			std::cout << reverse_arr[i] << " ";
		}

		std::cout << "\n����� ������� reverse: " << "\n";
		
		int* new_arr = new int[reverse_size]();			// �������� ����� ������ ������� reverse_size, ��� �������� ������� 0. () = ��� �������� ����� 0.
														// ������� �� ����� ����� ����������� ����� ������, ������� ������� ��� ������������ - ������� ��� ����� � ������������ ������.
														// � ������������ ������ �������� ����� ��� ��������� �� ���� ������, � ���������� ������� ��� ������ delete[] new_arr;
		int j = 0;
		for (int i = reverse_size - 1; i !=-1; i--)		// �������� ��� � �������� ������� �������� ����������� ������� reverse_arr
		{
			new_arr[j] = reverse_arr[i];
			
			//std::cout << new_arr[j] << " ";	// Only for Debug
			j++;
		}
		//std::cout << "\n";					// Only for Debug
		int g = 0;										// ������������ ������� reverse_arr �������� ��� � ������� new_arr - ������� �� �����������.
		for (int i = 0; i < reverse_size; i++)		
		{
			
			reverse_arr[g] = new_arr[i];
			std::cout << reverse_arr[g] << " ";
			g++;
		}
		delete[] new_arr;
			
		std::cout << "\n\n";
		
		/*int tmp;
		for (int i = 0; i < reverse_size / 2; ++i)
		{
			tmp = reverse_arr[i];
			reverse_arr[i] = reverse_arr[reverse_size - i - 1];
			reverse_arr[reverse_size - i - 1] = tmp;
		}

		for (int i = 0; i < reverse_size; ++i)
		{
			std::cout << reverse_arr[i] << " ";
		}*/
	}
	
// �������� ������� "���������. ������� � ��������� �������"
/*
// ����� ������ ��� ���������� ��� ��������, ����������� �������� typeid.

int main(int argc, char** argv)
{

// ������������� ��������� typeid �������� ��� :
double number = 5.6;
std::cout << "type of number variable: " << typeid(number).name() << std::endl;
std::cout << "type of number literal 10.4: " << typeid(10.4).name() << std::endl;
std::cout << "type of number literal 3: " << typeid(3).name() << std::endl;
return 0;
}

*/

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");

	// ������ 1. ����� �������.
	std::cout << "\n������ 1. ����� �������. " << "\n";

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size1 = sizeof(arr1) / sizeof(int);
	print(arr1, size1);
	std::cout << "\n";

	int arr2[] = { 6, 5, 4, 8 };
	int size2 = sizeof(arr2) / sizeof(int);
	print(arr2, size2);
	std::cout << "\n";

	int arr3[] = { 1, 4, 3, 7, 5 };
	int size3 = sizeof(arr3) / sizeof(int);
	print(arr3, size3);
	


	// ������ 2. ����� swap
	std::cout << "\n������ 2. ����� swap. " << "\n";

	int a = 5, b = 8;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;


	// ������ 3. ��������� �������.
	std::cout << "\n������ 3. ��������� �������. " << "\n";

	int reverse_arr[] = { 111, 27, 36, 45, 54, 63, 72, 81, 9 };
	int reverse_size = sizeof(reverse_arr) / sizeof(reverse_arr[0]);
	reverse(reverse_arr, reverse_size);
	
	std::cout << "\n\n";

	
	/*
	int number_arr[] = {2,3,4,5};
	fun(number_arr, 4);

	//for (int i = 0; i < reverse_size; i++) // Only for Debug
	//{
	//	std::cout << reverse_arr[i] << " ";
	//}

	// std::cout << "reverse_size : " << reverse_size << "\n";
	//std::cout << "sizeof(reverse_arr) : " << sizeof(reverse_arr) << "\n";
	//std::cout << "typeid(reverse_arr[0]).name() : " << typeid(reverse_arr[0]).name() << "\n";



	int numer = 100; // ������������������� ���������� ���� int, ��� �� ��� ����� ���� ����� � ���

	// ������� ����� ���������� numer � ��� ����� � ������� &numer
	std::cout << &numer << std::endl;

	// �������� ������� �������� ��������� �� �� ������ � ��� ����� � ������� ��������� *(&numer) - ������������ ����������.
	std::cout << *(&numer) << std::endl;

	std::cout << std::endl;

	// ����� �������� ����� � ��������� ����������
	int second = 1;
	int* adress = &second; // ��������� int *

	char char_1 = 'Hi';
	char* adress_1 = &char_1; // ��������� char *
	
	// ������� ����� ���������� second � ��� ����� � ������� ��������� int* adress
	std::cout << adress << std::endl;

	// �������� ������� �������� ��������� �� �� ������ � ��� ����� � ������� ��������� *(adress) - ������������ ����������.
	std::cout << *adress << std::endl;

	// ��������� � ������� ����� ��� ������ � ��������� � ��������� ������� �� �������� ����� � ���
	std::cout << "type of number variable: " << typeid(adress).name() << std::endl;
	std::cout << "sizeof: " << sizeof(adress) << std::endl;

	// ��������� � ������� ����� ��� ������ � ��������� � ��������� ������� �� �������� ����� � ���
	std::cout << "type of number variable: " << typeid(adress_1).name() << std::endl;
	std::cout << "sizeof: " << sizeof(adress_1) << std::endl;

	//// ������ ��� ������ - ������� �������� ����� ���������? (� 32� ��������� �� - 4 �����, � 64� ��������� �� - 8 ����)


	// ��������� � �������
	int arr[] = { 2, 3, 4 };

	// ��������� ������ ����� ��� ������ � �������
	std::cout << "type of number variable: " << typeid(arr).name() << std::endl;
	std::cout << arr << std::endl; // �������� ������ � ������ ���. ������ ����� ���� ��� ���������

	// ���������� ���������, ����� �������� ����� ������� � ���������� arr_ptr
	int* arr_ptr = arr;
	std::cout << arr << std::endl; // ������� ����� ������� �������� �������
	std::cout << arr_ptr << std::endl; // ������� ����� ������� �������� �������
	std::cout << &arr[0] << std::endl; // ������� ����� ������� �������� �������
	
	/*
	auto int_ptr = new int(100);
	delete int_ptre;

	auto int_ptr = new int[100];
	delete[] int_ptr;
	*/


	// �������� ������� � �������.
	// ���� ��� �������, �������� ����� �������� �������������� (���������) ������ � �������� ��������� �������:
	// - � ��������� ������� 
	// - ��� �������� ������� �������
	// - ��� ���������
	
 

	return 0;
}