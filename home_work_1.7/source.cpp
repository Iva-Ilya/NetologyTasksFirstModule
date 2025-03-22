#include <iostream>

// Функция swap для задачи 2 - Обмен значениями.
int swap(int& a, int& b)
{
	int c = a;
	a = b;
	b = c;
	return a, b;
}

int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus");

	// Задача 1. Адреса переменных.
	std::cout << "\nЗадача 1. Адреса переменных. " << "\n";

	int a1;
	short a2;
	long a3;
	long long a4;
	float a5;
	double a6;
	long double a7;
	bool a8;

	std::cout << "int: " << &a1 << " " << sizeof(a1) << std::endl;
	std::cout << "short: " << &a2 << " " << sizeof(a2) << std::endl;
	std::cout << "long: " << &a3 << " " << sizeof(a3) << std::endl;
	std::cout << "long long: " << &a4 << " " << sizeof(a4) << std::endl;
	std::cout << "float: " << &a5 << " " << sizeof(a5) << std::endl;
	std::cout << "double: " << &a6 << " " << sizeof(a6) << std::endl;
	std::cout << "long double: " << &a7 << " " << sizeof(a7) << std::endl;
	std::cout << "bool: " << &a8 << " " << sizeof(a8) << std::endl;

	// Задача 2. Обмен значениями.
	std::cout << "\nЗадача 2. Обмен значениями. " << "\n";
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(a, b);

	std::cout << "a = " << a << ", b = " << b << std::endl;


	return 0;
}

/*

// Передача по ссылке - используем значок & перед переменной в описании функции. Больше ничего делать не нужно.
//void calc(int &val)
//{
//	val *= 10;
//	// std::cout << "&val: " << &val << std::endl; // Вывести адрес переменной в оперативной памяти
//	std::cout << "val: " << val << std::endl;
//}


// Передача по указателю - используем значок * перед переменной в описании функции, в теле функции.
// В основной программе при вызове функции перед перменной ставим значок &.
void calc(int *val)
{
	*val *= 10;
	// std::cout << "&val: " << &val << std::endl; // Вывести адрес переменной в оперативной памяти
	std::cout << "val: " << *val << std::endl;
}


int main(int argc, char* argv[])
{
	setlocale(LC_CTYPE, "rus");

	int value = 5;
	calc(&value);
	// std::cout << "&value: " << &value << std::endl; // Вывести адрес переменной в оперативной памяти
	std::cout << "value: " << value << std::endl;

	/*char a = 54;
	char b = 22;
	short val = 4511;
	char c1 = 'H', c2 = 'e', c3 = 'l', c4 = 'l', c5 = 'o';

	std::cout << (void*) &a << std::endl;
	std::cout << (void*) &b << std::endl;*/