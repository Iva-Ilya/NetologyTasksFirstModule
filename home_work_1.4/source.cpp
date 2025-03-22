#include <iostream>


// ДЗ Задание 1  - Сумматор
int main()
{
	setlocale(LC_CTYPE, "rus");

	std::cout << "\nЗадание 1 - Сумматор " << "\n";

	int a, b = 0;
	do
	{
		std::cout << "Введите целое число: \n";
		std::cin >> a;
		b = b + a;
	} while (a != 0);
	std::cout << "Сумма цифр: " << b << "\n";

	// ДЗ Задание 2  - Сумма цифр числа
	std::cout << "\nЗадание 2 - Сумма цифр числа " << "\n";

	int num;
	std::cout << "Введите целое число: \n";
	std::cin >> num;
	int sum = 0;
	while (num > 0) {
		sum = sum + (num % 10);
		num = num / 10;
	}
	std::cout << "Сумма цифр: " << sum << "\n";


// Комментарий по работе программы для себя
		/* int num;
		std::cout << "Введите целое число: \n";
		std::cin >> num;
		std::cout << "Остаток от деления\t" << "Сумма n-ой итерации\t" << "Результат деления на 10" << "\n";
		int sum = 0;
			while (num > 0) {
				sum = sum + (num % 10);
				std::cout << num % 10 << "\t\t\t" << sum << "\t\t\t";
				num = num / 10;
				std::cout << num << "\n";
			}
			std :: cout << "Сумма цифр: " << sum << "\n";
		*/

	// ДЗ Задание 3  - Таблица умножения для числа
	std::cout << "\nЗадание 3 - Таблица умножения для числа " << "\n";
		
			int number;
			std::cout << "Введите целое число: \n";
			std::cin >> number;

			for (int multiplier = 1; multiplier < 11; multiplier++)
			{
				std::cout << number << " x " << multiplier << " = " << number * multiplier << "\n";
			}
			return 0;
}
		