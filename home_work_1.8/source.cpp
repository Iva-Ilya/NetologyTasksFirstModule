#include <iostream>

// Для задачи 1 - Функция, считающая сколько раз ее вызвали. 
//Переменная static инициализируется только при первом вызове функции, если функция вызвана повторно, то static не вызывается, но занчение переменной сохраняется
void counting_function()
{
	static int j = 1;
	std::cout << "Количество вызовов функции counting_function(): " << j << "\n";
	j++;
}


// Для задачи 2 - Создание нескольких пространств имен для вызова функции с одним названием
  namespace sum
  {	
	  int calc(int x, int y)
	  {
		  //x = 10;
		  //y = 10;
		  return x + y;
	  }
  }
	 
  namespace subtraction
  {
	  int calc(int x, int y)
	  {
		  return x - y;
	  }
  }

  namespace multiplication
  {
	  int calc(int x, int y)
	  {
		  return x * y;
	  }
  }

  namespace division
  {
	  int calc(int x, int y)
	  {
		  return x / y;
	  }
  }

int main()
{
	setlocale(LC_ALL, "Russian");

	// Задача 1. Считающая функция.
	std::cout << "\nЗадача 1. Считающая функция. " << "\n";

	for (int i = 0; i < 15; i++)
	{
		counting_function();
	}

	// Задача 2. Одинаковые, но разные функции.
	std::cout << "\nЗадача 2. Одинаковые, но разные функции. " << "\n";

	int x = 6, y = 9;
	std::cout << "x = " << x << "," << "y = " << y << "\n";

	std::cout << "Сложение: " << sum::calc(x, y) << "\n";
	std::cout << "Вычитание: " << subtraction::calc(x, y) << "\n";
	std::cout << "Умножение: " << multiplication::calc(x, y) << "\n";
	std::cout << "Деление: " << division::calc(x, y) << "\n";

}


/*
В программах существуют 3 вида памяти:
● Статическая
● Автоматическая
● Динамическая

Статическая память
Статические переменные имеют фиксированный адрес, известный до запуска
программы и не изменяющийся в процессе её работы. Статические переменные
создаются и инициализируются до входа в функцию main, с которой начинается
выполнение программы


*/
