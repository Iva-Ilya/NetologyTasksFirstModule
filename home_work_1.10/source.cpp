#include <iostream>

// ��� ������ 1 - �������, � ������� �������� ������ �� ��������� � ������� �� �����. 




















// �������� ������ � ������� � ������� ��� ����������� ����
//int* create_arr()
//{
//	return new int[10];
//}

// ��� ������ 2 - ������� �� ������������ ������ ������� � ������� ���, ��� ��� �������� ����� 0
double* create_array(int size_array)
{
	double* creat_array = new double[size_array]();
	return creat_array;
}


// ��� ������ 3 - 
int** create_two_dim_array(int rows, int cols)
{
	int** arr = new int* [rows]; // ������ ������ ���������� (int*). ��� ������ ����� ����� ��� int**
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols]; // ��� ������ ������ ������� arr ������ ������ ����� ����� � ����� ��������� �� ����� ��������� ������ � ��� ������
	}
	return arr;
}

void fill_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	// create_two_dim_array[rows][cols]; 
	
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			create_two_dim_array[i][j] = (i + 1) * (j + 1);
			// std::cout << create_two_dim_array[i-1][j-1] << "\t";
		}
		// std::cout << "\n";
	}

}

void print_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < cols; ++j) 
		{
			std::cout << create_two_dim_array[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

void delete_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] create_two_dim_array[i]; // ������� ������ ��������� ��������
	}
	delete[] create_two_dim_array; // ������� ��������������� ������ ����������
}


//void fun(int* number_arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
//	}
//
//}



int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");

	// ������ 1. ���� ������� � �������.
	std::cout << "\n������ 1. ���� ������� � �������. " << "\n";

	int size, element{};
	std::cout << "������� ������ �������: ";
	std::cin >> size;
	int* arr = new int[size];
	int i = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> element;
		arr[i] = element;
		/*std::cout << arr[i] << " ";*/
	}
	
	std::cout << "�������� ������: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;


	// ������ 2. ��������� ��������.
	std::cout << "\n������ 2. ��������� ��������. " << "\n";

	int size2;
	std::cout << "������� ������ �������: ";
	std::cin >> size2;
	double* Arr = create_array(size2);
	std::cout << "������: ";
	for (int i = 0; i < size2; i++)
	{
		std::cout << Arr[i] << " ";
	}
	delete[] Arr;

	// ������ 3. ������������ ������� ���������.
	std::cout << "\n������ 3. ������������ ������� ���������. " << "\n";

	int rows, cols;
	std::cout << "������� ���������� �����: ";
	std::cin >> rows;
	std::cout << "������� ���������� ��������: ";
	std::cin >> cols;

	//create_two_dim_array(rows, cols);
	int **Array = create_two_dim_array(rows, cols);

	fill_two_dim_array(Array, rows, cols);
	print_two_dim_array(Array, rows, cols);
	delete_two_dim_array(Array, rows, cols);

	
	/*const int z = 10; const int y = 10;
	int a[z][y]; int s = 1, n = 1;
	for (int i = 0; i < z; ++i) {
		for (int j = 0; j < y; ++j) {
			a[i][j] = s * n;
			n++;
			std::cout << a[i][j] << "\t";
		}
		n = 1;
		s++;
		std::cout << std::endl;
	}
	*/





	/*
	// �������� ������� ���������. ������������ ������
	// ������������ ������.������� malloc, calloc � free
	
	//������� malloc ��������� � ���������� �stdlib. ��� ������������� ������� ���������� ���������� ��� ����������. �����������
//�������������� � ������� ��������������� ��������� include ��� ��, ��� �� ���������� ���������� iostream ��� ������������� ������ �� ������� (std::cout)
	
	// ����� ������ ������� malloc ���������� ��� ��������� �� ������� ������, ������� �������� ��� ������������ �������.
	// �����, ��� ������������ ����� ������� malloc �������� void* - ��� ���������, ������� �� �����, �� �������� ������ ���� �� ���������.
	malloc(20); // ��������� � ������������ ������� 20 ���� ������

	void* ptr = malloc(20); // ��������� ��������� �� 20 ���� ���������� ������ � ���������� ptr

	int* int_ptr1 = static_cast<int*>(malloc(20)); // int_ptr �������� ��� �������� � ������ �������. 20 ����/4 ����� = 5 ����� ���� int ����� �������� � ���������� ������

	// ������������ ������. ����� �������� ������ ��� �������� ������ �����, ���������� �������� ��� � ��������� sizeof.
	int* int_ptr2 = static_cast<int*>(malloc(29 * sizeof(int))); // � ������ int_ptr ���������� 29 ����� �����

	double* dbl_ptr = static_cast<double*>(malloc(13 * sizeof(double)));

	// ����������� ���������� ������ ����� ������������� ���� ��������. 
	// ��� ����� ������������ ������� free.��� ������� ��������� � �������� ��������� ��������� �� ����������� ���������� ������.

	int* int_ptr3 = static_cast<int*>(malloc(20 * sizeof(int))); // ������� ������������ ������ �� 20 ����� �����
	int_ptr3[0] = 65; // ������������ ���� ������
	free(int_ptr3); // ����������� ������



	int* int_arr = static_cast<int*>(malloc(10 * sizeof(int)));

	// ���� �� ������������������� ��������� ������ �����-���� ���������� (���� 0 - ������� ������), �� � ���� ����� ���� �������� ������������ �������� (���������� ��� ������ ��� �������� � ������)
	// ��� �������� ���������������� for ����
	for (int i = 0; i < 10; i++)
	{
		int_arr[i] = 0;

	}
	//
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << int_arr[i] << std::endl;

	}
	free(int_arr);

	// ������� calloc ���� �������� ������, ��� � ������� malloc, ������ ��� �������� �������������� ����� ����� ����. ����� �������� � free
	int* int_ptr = static_cast<int*>(calloc(20, sizeof(int))); // � ������ int_ptr ���������� 20 ����� �����
	
	//int size = 15;
	//float* flt_ptr = static_cast<int*>(calloc(size * sizeof(float))); // ���������� ��������� �� � ���� ���� � ������� calloc 2 ���������
	//flt_ptr[size] = 43.8; // ����� �� ������� �������
	//return 0; // ������ �������� ������
	
	int size1 = 15;
	float* flt_ptr = static_cast<float*>(calloc(size1, sizeof(float)));
	flt_ptr[size1 - 1] = 43.8;
	free(flt_ptr);

	// ��� �������� ������������ ����������, ���������� ���� ��������, ����� ������������ �������� new. ��� �������� - �������� delete.

	int* var = new int;// �������� ������������ ������ ��� ���������� ��� ������ ������ �����
	*var = 50; // ���������� ���������� �� ������������ ������
	std::cout << std::endl << *var << std::endl;
	delete(var);

	// ������ �� �������������: ��� ���������� malloc(calloc) �� new? �����: new �������� ����������� ��� �������(������)
	// delete �������� ���������� ��� ������(������)

	int* var1 = new int; // �������� ������������ ������ ��� ���������� ��� ������ ������ �����
	*var1 = 150; // ���������� ���������� �� ������������ ������
	delete var1; // ������� ������������ ������

	int* int_ptr4 = new int[5]; // �������� ������������ ������ �� 5 ���������
	delete[] int_ptr4; // ������� ������


	// ������������ ������ � ��������.
			// ����� ������� ������ � ������� � ������ ��� ����������� ����, ����� �� ���� �� ������������, ����� ������������ ������������ �������.
			/* ��� ������� ������� �� main()
			int* create_arr()
			{
				return new int[10];
			}
			*/

			// �������� ������ ���������� ������������� ������� � �������� ��� ������ ������� �� �������
			/*int size2;
			std::cout << "������� ������ �������: ";
			std::cin >> size2;
			int* arr5 = new int[size2];

			std::cout << "��� ������: ";

			for (int i = 0; i < size2; i++)
			{
				arr5[i] = i + 1;
				std::cout << arr5[i] << " ";
			}
			delete[] arr5;*/
			//

	return 0;
}