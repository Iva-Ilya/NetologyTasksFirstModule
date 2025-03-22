#include <iostream>
#include <string>
#include <cstring>
#include <Windows.h>

// Напишем функцию для определения длины строки, аналогично встроенной функции strlen
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




// Для задачи 1 - Функция, в которую передают массив по указателю и выводят на экран. 
void print(int* number_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
	}
}

//int j = 0;
//for (int i = reverse_size - 1; i != -1; i--)		// Присвоим ему в обратном порядке значения полученного массива reverse_arr
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

	// Задача 1. Приветствие
	std::cout << "\nЗадача 1. Приветствие " << "\n";

	std::string first_name;
	std::string second_name;

	std::cout << "Введите имя: ";
	std::cin >> first_name;
	std::cout << "Введите фамилию: ";
	std::cin >> second_name;
	std::cout << "Здравствуйте, " << first_name + " " + second_name << "!" << "\n";


	// Задача 2. Угадайка.
	std::cout << "\nЗадача 2. Угадайка. " << "\n";

	std::string right_word = "Экзитпол";
	std::string some_word;
	do
	{
		std::cout << "Угадайте слово: ";
		std::cin >> some_word;
	} while (some_word != right_word);
	std::cout << "Правильно! Вы победили! Загаданное слово - " << some_word << "\n";



	// Конпескт занятия "Строки" 
	//Char — это целочисленный тип данных, то есть целое число. Размер типа char — 1 байт.Он вмещает в себя всего 256 различных значений.
	//Таблица ASCII определяет соответствие кода символа (его номера, числа) самому символу.

	//char ch = 78;
	//std::cout << ch << std::endl; // увидем при выводе на экран N

	//// Можно посмотреть код символа. Для этого в переменную char нужно «положить» символ, а при выводе привести переменную char к типу int:
	//char ch1 = 'N';
	//std::cout << static_cast<int>(ch1) << std::endl; // 78

	//// Как устроена строка? 
	//char str[] = { "Hello" };
	//std::cout << str << std::endl; // на консоль будет выведено Hello
	//std::cout << sizeof(str) / sizeof(str[0]);// на консоль будет выведено 6
	//// В строке мы видим 5 символов, но компилятор выводит 6. Шестым символом является символ конца строки \0

	//// char str[] = { "Hello" };
	//int size = sizeof(str) / sizeof(str[0]);
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << "str1[" << i << "] = " << str[i] << std::endl;
	//}
	//// 6 символ конца строки \0 - непечатаемый.

	////Выведем на консоль коды символов
	//
	//// int size = sizeof(str) / sizeof(str[0]);
	//// char str[] = { "Hello" };
	//for (int i = 0; i < size; i++)
	//{
	//	std::cout << "str[" << i << "] = " << str[i] << ". Code = " << static_cast<int>(str[i]) << std::endl;
	//}


	//// Для работы со строками в C++ существует несколько встроенных функций, которые хранятся в библиотеке <cstring>.
	//
	//// Подсчитывает количество символов в строке без учёта нуль-терминатора.
	////Сигнатура — int strlen(char* str).Ожидает на вход указатель на строку, возвращает количество символов в этой строке :
	//// char str[] = { "Hello" };
	//std::cout << strlen(str) << std::endl; // 5

	//// Написанная до main функция strlen2
	//std::cout << "strlen2: " << strlen2("") << std::endl;

	//// Функция для копирования значений одного массива в другой. Сигнатура — char* strcpy (char* destination, char* source). Принимает на вход два
	//// указателя на строки(destination и source), копирует содержимое строки source в строку destination, включая нуль - терминатор.
	////char src[] = { "Hello world!" };
	////char* dest = new char[strlen(src) + 1];
	////strcpy(dest, src);						// Компилятор ругается на эту функцию - пишет, что она не безопастная!!!
	////std::cout << dest << "\n";
	////delete[] dest;

	//// Функция strcat - Присоединяет содержимое строки source к концу строки destination.
	////char source[] = { " world" };
	////char dest1[30] = { "Hello" };
	////// // Компилятор ругается на эту функцию - пишет, что она не безопастная!!!
	////std::cout << strcat(dest1, source) << std::endl; // Hello world

	//// Функция strcmp - Сигнатура — int strcmp (char* str1, char* str2). Принимает на вход два указателя на строки(str1 и str2), производит посимвольное сравнение строк.
	//// ВАЖНО!!! Сравнение происходит посимвольное, т.е сравнивается код символов, а не длина строки и т.д
	//// Например:
	//char str11[] = { "Hello" };
	//char str2[] = { "Hi" };
	//char str3[] = { "Hello" };
	//std::cout << strcmp(str11, str2) << std::endl; // -1, т.к по таблице ASCII код символов H одинаковый, сравниваются e и i - код символа i больше, поэтому выведется -1.
	//std::cout << strcmp(str2, str3) << std::endl; // 1
	//std::cout << strcmp(str11, str3) << std::endl; // 0
	//// Возвращает отрицательное число, если str1 < str2
	//// Возвращает положительное число, если str1 > str2
	//// Возвращает 0, если str1 = str2

	//// Функция strchr - Сигнатура — char* strchr (char* str, char character). Принимает на вход указатель на строку(str) и символ(character), выполняет поиск указанного символа в строке.
	////	Возвращает указатель на найденный в строке символ.Если символ в строке отсутствует, возвращает nullptr — нулевой указатель:
	//// char str[] = { "Hello" };
	//char c_h = 'e';
	//std::cout << strchr(str, c_h) << std::endl; // ello


	return 0;
}