#include <iostream>
#include <string>
// ���� while
/*int main()
{
	std::string string;
	while (string != "exit")
	{
		std::cout << "Enter \"exit\" to quit: ";
		std::getline(std::cin >> std::ws, string);
	}
	std::cout << "Success!!!\n\n\n";

	return 0;
}
*/

//���� do while
/*
int main()
{
	std::string string;
	do
	{
		std::cout << "Enter \"exit\" to quit: ";
		std::getline(std::cin >> std::ws, string);
	} while (string != "exit");
	std::cout << "Success!!!\n\n\n";

	return 0;
}
*/


// ���� for
/*
int main()
{
	int size = 5;
	for (int row = 0; row < size; ++row)
	{
		// �������� ������� (row < size)
		std::cout << row << std:: endl;
		// ++row
	}
	
	return 0;
}
*/

// ���� for - ���������� �������� � �����
/*
#include <iostream>

int main()
{
  int size = 5;
  for (int row = 1; row < size; ++row)
  {
	for (int colume = 1; colume < size; ++colume)
	{
	  std::cout << row * colume << "\t";
	}
	std::cout << std::endl;
  }
  return 0;
}
*/


// continue - ������� � ��������� �������� ���������� ����� - ���������� �����-�� �������� (��������)
/*
#include <iostream>

int main()
{
  int size = 5;
  for (int row = 1; row < size; ++row)
  {
	for (int colume = 1; colume < size; ++colume)
	{
		if (row == 3)
		{
			continue;
		}
	  std::cout << row * colume << "\t";
	}
	std::cout << std::endl;
  }
  return 0;
}
*/


// break - ��������� ����� �� ���������� �����, ��������� ���
/*
#include <iostream>

int main()
{
  int size = 5;
  for (int row = 1; row < size; ++row)
  {
	if (row == 4)
	{
	break;
	}
	for (int colume = 1; colume < size; ++colume)
	{
		if (row == 3)
		{
			continue;
		}
	  std::cout << row * colume << "\t";
	}
	std::cout << std::endl;
  }
  return 0;
}
*/


// ����������� ���� - ������� ������ �����������
/*
int main()
{
  int counter = 1;
  while (counter < 10)
  {
	std:: cout << "Hello!\n";
  }

  return 0;
}


int main()
{
  while (true)
  {
	std:: cout << "Hello!\n";
  }

  return 0;
}
*/


// �� ������� 1  - ��������
int main()
{
	setlocale(LC_CTYPE, "rus");
	
	int a;
	std::cout << "������� ����� �����: \n";
	std::cin >> a;
	int b = 0;
	while (a != 0) 
	{
		std::cout << "������� ����� �����: \n";
		std::cin >> a;
		b = b + a;
		
	}
	std::cout << "����� ����: " << b << "\n";
}


	// �� ������� 2  - ����� ���� �����
	/* int main()
	{
		setlocale(LC_CTYPE, "rus");
		
		int num;
		std::cout << "������� ����� �����: \n";
		std::cin >> num;
		int sum = 0;
		while (num > 0) {
			sum = sum + (num % 10);
			num = num / 10;
		}
		std::cout << "����� ����: " << sum << "\n";
	}*/

	// ����������� �� ������ ��������� ��� ����
			/* int num;
			std::cout << "������� ����� �����: \n";
			std::cin >> num;
			std::cout << "������� �� �������\t" << "����� n-�� ��������\t" << "��������� ������� �� 10" << "\n";
			int sum = 0;
				while (num > 0) {
					sum = sum + (num % 10);
					std::cout << num % 10 << "\t\t\t" << sum << "\t\t\t";
					num = num / 10;
					std::cout << num << "\n";
				}
				std :: cout << "����� ����: " << sum << "\n";
			*/



// �� ������� 3  - ������� ��������� ��� �����
/* int main()
{
	setlocale(LC_CTYPE, "rus");

	int number;
	std::cout << "������� ����� �����: \n";
	std::cin >> number;

	for (int multiplier = 1; multiplier < 11; multiplier++)
	{
		std::cout << number << " x " << multiplier << " = " << number * multiplier << "\n";
	}
	return 0;
}
*/