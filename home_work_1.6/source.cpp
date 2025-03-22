
#include <iostream>

// Ниже обьявление функции для соответствующих заданий

// Задача 1. Арифметические функции
int sum(int a, int b)
{
	return a + b;
}

int diff(int a, int b)
{
	return a - b;
}

int multiplication(int a, int b)
{
	return a * b;
}

float division(int a, int b)
{
	float res = static_cast<float>(a) / b; // Преобразование типа int к типу float (с помощью static_cast<новый тип>(преобразуемая переменная)), т.к при делении может получится остаток.
	return res; // Функция возвращает тип данных такой же, каким она обьявлена - float.
}

// Задача 2. Устранение дублирования. Функция возведения в степень.
int exponentiation(int value, int power) 
{
	int result{1};
	for (int i = 0; i < power; i++) 
	{
		result = result * value;
	}
	std::cout << value << " в степени " << power << " = " << result << std::endl;
	return result;
}

// ДЗ Задача 3. Числа Фибоначчи.
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233...
double fibonacci(int number)
{
	if (number == 0)
		return 0;
	if (number == 1)
		return 1;
	return fibonacci(number - 2) + fibonacci(number - 1);
}

// Основная программа
int main(int argc, char *argv[])
{
	setlocale(LC_CTYPE, "rus");
	
	std::cout << "\nЗадача 1. Арифметические функциин " << "\n";

	int a = 5, b = 100;

	int s = sum(a, b);
	int dif = diff(a, b);
	int mult = multiplication(a, b);
	float div = division(a, b);

	std::cout << a << " + " << b << " = " << s << std::endl;
	std::cout << a << " - " << b << " = " << dif << std::endl;
	std::cout << a << " * " << b << " = " << mult << std::endl;
	std::cout << a << " / " << b << " = " << div << std::endl;


	std::cout << "\nЗадача 2. Устранение дублирования. Функция возведения в степень " << "\n";

	exponentiation(5, 2);
	exponentiation(3, 3);
	exponentiation(4, 4);
	

	std::cout << "\nЗадача 3. Числа Фибоначчи " << "\n";

	int number = 0 ;
	while (number >= 0)
	{
		std::cout << "Введите число: " << std::endl;
		std::cin >> number;

		for (int i = 0; i < number; i++)
		{
			std::cout << fibonacci(i) << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}


/*// Конспект занятия по функциям
void printPersonInfo(const std::string &welcome, const std::string &aPerson) {  // параметры функции, в нашем случае задаем 2 строки
	std::cout << welcome << ",,,,, " << aPerson << std::endl; // тело функции
}

int sum2(int a2, int b2) {
	int value = a2 + b2;
	// std::cout << "debug info: " << value << std::endl; // Почему сначала дебуг выводится, потом только сумм резалт?
	return value;
}

void print_volume(int a1, int b1, int c1) 
	{
	int volume = a1 * b1 * c1;
	std::cout << volume << std::endl;
	}

static void helloPerson(const char  *Welcome, const char *Person = "AleOlaloe") 
	{
	std::cout << Welcome << " - " << Person << std::endl;
	}

float division(int a, int b)
	{

	return a / b;
	}

//void hello(std::string name = "Anonymous")
//	{
//	std::cout << "Hello, " << name << std::endl;
//	}
//int main(int argc, char** argv)
//	{
//	hello("Dima");
//	hello();
//	return 0;
//	}

int main(int argc, char *argv[]) {

	int a = -5, b = -100;

	float div = division(a, b);
	std::cout << a << " / " << b << " = " << div << std::endl;

	std::cout << "argc: " << argc << std::endl; // число передаваемых параметров в функцию int main
	std::cout << "argv[0]: " << argv[0] << std::endl; // что содержится в каждом параметре - в первом всегда содержится адрес

	printPersonInfo("Welcome", "Dima!");
	printPersonInfo("Hi", "Ann!");
	printPersonInfo("Hello", "Oleg!");

	std::cout << "sum2 result: " << sum2(10, 5) << std::endl;

	print_volume(3, 3, 3);

	helloPerson("Hi", "Dima");
	helloPerson("Dima", "Hi");
	helloPerson("Hello", "Oleg");
	helloPerson("Welcome");

	return 0;
}
*/

