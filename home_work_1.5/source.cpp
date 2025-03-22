#include <iostream>
#include <string>

int main()
{

	/* �������� ������� ������� */
	// char - 1 ����
	// int - 4 ����

	/* ������ ���������� �������� � ������ ������� �� ���� ������
	std::cout << "sizeoff(char) = " << sizeof(char) << "\n";
	std::cout << "sizeoff(int) = " << sizeof(int) << "\n";

	// char char_arr[] = { 'H', 'e', 'l', 'l', 'o' }; - ��� ��������� ������� char - �������� ������ ����
	int char_arr[] = { 'H', 'e', 'l', 'l', 'o' };
	std::cout << "sizeoff(char_arr) = " << sizeof(char_arr) << "\n";
	*/

	/* ���������� ������ - ����� �� �������
	const int rows = 3, columns = 6;
	int arr[rows][columns] = { {1, 2, 3, 4, 5, 6}, {7, 8, 9, 10, 11, 12}, {13, 14, 15, 16, 17, 18} };
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << std::endl;
		}
	}
	*/


	setlocale(LC_CTYPE, "rus");

	// �� ������� 1  - ����� ������� ����� �� �����
	std::cout << "\n������� 1 - ����� ������� �� ����� " << "\n";

	const int size = 10;
	int arr1_1[size];

	for (int i = 0; i < size - 1; i++)
	{
		arr1_1[i] = i;
		std::cout << arr1_1[i] << ", ";
	}
	arr1_1[size - 1] = size - 1;
	std::cout << arr1_1[size - 1] << "\n";

	/*
	// �� ������� 1  - ����� ������� ����� �� ����� � ������ � ����������;
	std::cout << "\n������� 1 - ����� ������� �� ����� " << "\n";

	int arr1_2[10];

	// ��������� ������ � ����������
	for (int i = 0; i < 10; i++)
		{
		std::cout << "[" << i + 1 << "]" << ": ";
		std::cin >> arr1_2[i];
		}

	// � ������� ����������� ������.
	std::cout << "\n��� ������: ";

	for (int i = 0; i < 10; ++i)
		{
		std::cout << arr1_2[i] << " ";
		}
	std::cout << "\n";
	*/


	// �� ������� 2  - �������� � �������
	std::cout << "\n������� 2 - �������� � ������� " << "\n";

	// const int size = 10; - ��� ����� ��������;
	int arr2[size] = { -112, -32, -31, -14, -55, -36, -72, -54, -21, -68 };

	std::cout << "������: ";

	//// ���������� ������� ������ �������
	//for (int i = 0; i < size - 1; i++)
	//{
	//	arr2[i] = i;
	//	std::cout << arr2[i] << ", ";
	//}
	//arr2[size - 1] = size - 1;
	//std::cout << arr2[size - 1] << "\n";

	// ����� ��������� � �������� �������
	int max = arr2[0], min = arr2[0];
	for (int i = 0; i < size; i++)
	{
		if (arr2[i] > max)
			max = arr2[i];
		if (arr2[i] < min)
			min = arr2[i];
	}
	std::cout << "����������� �������: " << min << "\n";
	std::cout << "������������ �������: " << max << "\n";


	// �� ������� 3  - ��������� ������
	std::cout << "\n������� 3  - ��������� ������ " << "\n";

	std::cout << "������:" << "\n";
	// ������� ����� ����� "row" � ����� ������� "columns". ������� ������ � ������ �������������
	const int rows = 3, columns = 6;
	int arr3[rows][columns] = { {1, 2, 3, 4, 55, 6}, {7, 8, -9, 10, 11, 12}, {13, 14, 15, 16, 17, 18} };
	// ����� ������� �� �����
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr3[i][j] << "	";
		}
		std::cout << "\n";
	}
	// ���������� ������������� � ������������ �������� ������� � �� ��������
	int ind11{}, ind12{}, ind21{}, ind22{}; // ������ 2� ������, ������ ��� ������� ����������� ����� ��������
	int max1 = arr3[0][0], min1 = arr3[0][0];
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			if (arr3[i][j] > max1)
			{
				max1 = arr3[i][j];
				ind11 = i;
				ind12 = j;
			}
			else if (arr3[i][j] < min1)
			{
				min1 = arr3[i][j];
				ind21 = i;
				ind22 = j;
			}
		}
	}
	std::cout << "������ ������������� ��������:  " << ind11 << " " << ind12 << "\n"; // << "max " << max1 - ����� ������������� ��������
	std::cout << "������ ������������ ��������:  " << ind21 << " " << ind22 << "\n"; // << "min " << min1 - ����� ������������ ��������


	// �� ������� 4  - �������� ������
	std::cout << "\n������� 4  - �������� ������ " << "\n";

	// ���������� �������, ������ �������������
	int arr4[] = { 112, 32, 31, 14, 55, 36, 72, 54, 21, 68 };
	// ����������� ����������� �������
	const int size4 = sizeof(arr4) / sizeof(int);

	std::cout << "������ �� ����������: ";

	// ����� ������������������ ������� �� �����
	for (int i = 0; i < size4; i++)
	{
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n";

	// ���������� ������� �� �������� � ��������. "�������� �������� �������".
	std::cout << "������ ����� ����������: ";
	for (int i = 0; i < size4; i++)
	{

		for (int j = size4 - 1; j > 0; j--)
		{

			if (arr4[j] < arr4[j - 1]) // ��������� �������� �������� � ����������.
			{
				int b = arr4[j];	   // ������������ (����������������) �������� �������.
				arr4[j] = arr4[j - 1];
				arr4[j - 1] = b;
			}

		}
		// ����� ���������������� ������� �� �����
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n\n";


	// ����� ���������������� �������
	/*
	for (int i = 0; i < size4; i++)
	{
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n";
	*/
	

	// ������ ������� ���� "�������� �������"
	/*
	int i, j;
	int mass[size];
	srand(std::time(nullptr));
	for (i = 0; i < size; i++)
	{
		mass[i] = rand() % 99;
	}
	std::cout << "������ �� ����������: ";
	for (i = 0; i < size; i++)
	{
		std::cout << mass[i] << " ";
	}

	std::cout << "\n";

	for (j = 0; j < size; j++)
	{
		for (i = size - 1; i > 0; i--)
		{
			if (mass[i] < mass[i - 1]) {
				// std::swap(mass[i],mass[i-1]);
				int tmp = mass[i];
				mass[i] = mass[i - 1];
				mass[i - 1] = tmp;
			}
		}
	}
	std::cout << "������ ����� ����������: ";
	for (i = 0; i < size; i++)
	{
		std::cout << mass[i] << " ";
	}
	std::cout << "\n";
	return 0;
	*/
}






// ������ ���������� �������, ������ �������������. 
// ����� �������� ������� � ������� ����� �������
/*std::string students[10] = {
	   "������", "������", "�������",
	   "�������", "�������", "�����",
	   "������", "��� ������", "���������", "������"};

   for (int i = 0; i < 10; i++) {
	   std::cout << students[i] << " , ";
   }

   return 0;
}*/