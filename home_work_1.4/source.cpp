#include <iostream>


// �� ������� 1  - ��������
int main()
{
	setlocale(LC_CTYPE, "rus");

	std::cout << "\n������� 1 - �������� " << "\n";

	int a, b = 0;
	do
	{
		std::cout << "������� ����� �����: \n";
		std::cin >> a;
		b = b + a;
	} while (a != 0);
	std::cout << "����� ����: " << b << "\n";

	// �� ������� 2  - ����� ���� �����
	std::cout << "\n������� 2 - ����� ���� ����� " << "\n";

	int num;
	std::cout << "������� ����� �����: \n";
	std::cin >> num;
	int sum = 0;
	while (num > 0) {
		sum = sum + (num % 10);
		num = num / 10;
	}
	std::cout << "����� ����: " << sum << "\n";


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
	std::cout << "\n������� 3 - ������� ��������� ��� ����� " << "\n";
		
			int number;
			std::cout << "������� ����� �����: \n";
			std::cin >> number;

			for (int multiplier = 1; multiplier < 11; multiplier++)
			{
				std::cout << number << " x " << multiplier << " = " << number * multiplier << "\n";
			}
			return 0;
}
		