#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>

// ������� ������� ��� ����������� ����� ������, ���������� ���������� ������� strlen
int strlen2(const char* str)
{
	if (nullptr == str)
	{
		return 0;
	}
	int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return len;
}




// ��� ������ 1 - �������, � ������� �������� ������ �� ��������� � ������� �� �����. 
void print(int* number_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
	}
}

//int j = 0;
//for (int i = reverse_size - 1; i != -1; i--)		// �������� ��� � �������� ������� �������� ����������� ������� reverse_arr
//{
//	new_arr[j] = reverse_arr[i];
//
//	//std::cout << new_arr[j] << " ";	// Only for Debug
//	j++;
//}
////std::cout << "\n";					// Only for Debug





int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// ������ 1. �����������
	std::cout << "\n������ 1. ����������� " << "\n";

	std::string first_name;
	std::string second_name;

	std::cout << "������� ���: ";
	std::cin >> first_name;
	std::cout << "������� �������: ";
	std::cin >> second_name;
	std::cout << "������������, " << first_name + " " + second_name << "!" << "\n";


	// ������ 2. ��������.
	std::cout << "\n������ 2. ��������. " << "\n";

	std::string right_word = "��������";
	std::string some_word;
	do
	{
		std::cout << "�������� �����: ";
		std::cin >> some_word;
	} while (some_word != right_word);
	std::cout << "���������! �� ��������! ���������� ����� - " << some_word << "\n";



	// �������� ������� "������" 
	//Char � ��� ������������� ��� ������, �� ���� ����� �����. ������ ���� char � 1 ����.�� ������� � ���� ����� 256 ��������� ��������.
	//������� ASCII ���������� ������������ ���� ������� (��� ������, �����) ������ �������.

	//char ch = 78;
	//std::cout << ch << std::endl; // ������ ��� ������ �� ����� N

	//// ����� ���������� ��� �������. ��� ����� � ���������� char ����� ���������� ������, � ��� ������ �������� ���������� char � ���� int:
	//char ch1 = 'N';
	//std::cout << static_cast<int>(ch1) << std::endl; // 78

	//// ��� �������� ������? 
	//char str[] = { "Hello" };
	//std::cout << str << std::endl; // �� ������� ����� �������� Hello
	//std::cout << sizeof(str) / sizeof(str[0]);// �� ������� ����� �������� 6
	//// � ������ �� ����� 5 ��������, �� ���������� ������� 6. ������ �������� �������� ������ ����� ������ \0

	//// char str[] = { "Hello" };
	//int size = sizeof(str) / sizeof(str[0]);
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << "str1[" << i << "] = " << str[i] << std::endl;
	//}
	//// 6 ������ ����� ������ \0 - ������������.

	////������� �� ������� ���� ��������
	//
	//// int size = sizeof(str) / sizeof(str[0]);
	//// char str[] = { "Hello" };
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << "str[" << i << "] = " << str[i] << ". Code = " << static_cast<int>(str[i]) << std::endl;
	//}


	//// ��� ������ �� �������� � C++ ���������� ��������� ���������� �������, ������� �������� � ���������� <cstring>.
	//
	//// ������������ ���������� �������� � ������ ��� ����� ����-�����������.
	////��������� � int strlen(char* str).������� �� ���� ��������� �� ������, ���������� ���������� �������� � ���� ������ :
	//// char str[] = { "Hello" };
	//std::cout << strlen(str) << std::endl; // 5

	//// ���������� �� main ������� strlen2
	//std::cout << "strlen2: " << strlen2("") << std::endl;

	//// ������� ��� ����������� �������� ������ ������� � ������. ��������� � char* strcpy (char* destination, char* source). ��������� �� ���� ���
	//// ��������� �� ������(destination � source), �������� ���������� ������ source � ������ destination, ������� ���� - ����������.
	////char src[] = { "Hello world!" };
	////char* dest = new char[strlen(src) + 1];
	////strcpy(dest, src);						// ���������� �������� �� ��� ������� - �����, ��� ��� �� �����������!!!
	////std::cout << dest << "\n";
	////delete[] dest;

	//// ������� strcat - ������������ ���������� ������ source � ����� ������ destination.
	////char source[] = { " world" };
	////char dest1[30] = { "Hello" };
	////// // ���������� �������� �� ��� ������� - �����, ��� ��� �� �����������!!!
	////std::cout << strcat(dest1, source) << std::endl; // Hello world

	//// ������� strcmp - ��������� � int strcmp (char* str1, char* str2). ��������� �� ���� ��� ��������� �� ������(str1 � str2), ���������� ������������ ��������� �����.
	//// �����!!! ��������� ���������� ������������, �.� ������������ ��� ��������, � �� ����� ������ � �.�
	//// ��������:
	//char str11[] = { "Hello" };
	//char str2[] = { "Hi" };
	//char str3[] = { "Hello" };
	//std::cout << strcmp(str11, str2) << std::endl; // -1, �.� �� ������� ASCII ��� �������� H ����������, ������������ e � i - ��� ������� i ������, ������� ��������� -1.
	//std::cout << strcmp(str2, str3) << std::endl; // 1
	//std::cout << strcmp(str11, str3) << std::endl; // 0
	//// ���������� ������������� �����, ���� str1 < str2
	//// ���������� ������������� �����, ���� str1 > str2
	//// ���������� 0, ���� str1 = str2

	//// ������� strchr - ��������� � char* strchr (char* str, char character). ��������� �� ���� ��������� �� ������(str) � ������(character), ��������� ����� ���������� ������� � ������.
	////	���������� ��������� �� ��������� � ������ ������.���� ������ � ������ �����������, ���������� nullptr � ������� ���������:
	//// char str[] = { "Hello" };
	//char c_h = 'e';
	//std::cout << strchr(str, c_h) << std::endl; // ello


	return 0;
}