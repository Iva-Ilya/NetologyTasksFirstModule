#include <iostream>
#include <string>

int main()
{

	/* Конспект занятия Массивы */
	// char - 1 байт
	// int - 4 байт

	/* Размер занимаемый массивом в памяти зависит от типа данных
	std::cout << "sizeoff(char) = " << sizeof(char) << "\n";
	std::cout << "sizeoff(int) = " << sizeof(int) << "\n";

	// char char_arr[] = { 'H', 'e', 'l', 'l', 'o' }; - тип переменых массива char - занимает меньше байт
	int char_arr[] = { 'H', 'e', 'l', 'l', 'o' };
	std::cout << "sizeoff(char_arr) = " << sizeof(char_arr) << "\n";
	*/

	/* Двухмерный массив - вывод по индексу
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

	// ДЗ Задание 1  - Вывод массива чисел на экран
	std::cout << "\nЗадание 1 - Вывод массива на экран " << "\n";

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
	// ДЗ Задание 1  - Вывод массива чисел на экран с вводом с клавиатуры;
	std::cout << "\nЗадание 1 - Вывод массива на экран " << "\n";

	int arr1_2[10];

	// Заполняем массив с клавиатуры
	for (int i = 0; i < 10; i++)
		{
		std::cout << "[" << i + 1 << "]" << ": ";
		std::cin >> arr1_2[i];
		}

	// И выводим заполненный массив.
	std::cout << "\nВаш массив: ";

	for (int i = 0; i < 10; ++i)
		{
		std::cout << arr1_2[i] << " ";
		}
	std::cout << "\n";
	*/


	// ДЗ Задание 2  - Максимум и минимум
	std::cout << "\nЗадание 2 - Максимум и минимум " << "\n";

	// const int size = 10; - был ранее обьявлен;
	int arr2[size] = { -112, -32, -31, -14, -55, -36, -72, -54, -21, -68 };

	std::cout << "Массив: ";

	//// Заполнение массива целыми числами
	//for (int i = 0; i < size - 1; i++)
	//{
	//	arr2[i] = i;
	//	std::cout << arr2[i] << ", ";
	//}
	//arr2[size - 1] = size - 1;
	//std::cout << arr2[size - 1] << "\n";

	// Поиск максимума и минимума массива
	int max = arr2[0], min = arr2[0];
	for (int i = 0; i < size; i++)
	{
		if (arr2[i] > max)
			max = arr2[i];
		if (arr2[i] < min)
			min = arr2[i];
	}
	std::cout << "Минимальный элемент: " << min << "\n";
	std::cout << "Максимальный элемент: " << max << "\n";


	// ДЗ Задание 3  - Двумерный массив
	std::cout << "\nЗадание 3  - Двумерный массив " << "\n";

	std::cout << "Массив:" << "\n";
	// Зададим число строк "row" и число колонок "columns". Обьявим массив и список инициализации
	const int rows = 3, columns = 6;
	int arr3[rows][columns] = { {1, 2, 3, 4, 55, 6}, {7, 8, -9, 10, 11, 12}, {13, 14, 15, 16, 17, 18} };
	// Вывод массива на экран
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			std::cout << arr3[i][j] << "	";
		}
		std::cout << "\n";
	}
	// Нахождение максимального и минимального значения массива и их индексов
	int ind11{}, ind12{}, ind21{}, ind22{}; // Массив 2х мерный, каждый его элемент описывается парой индексов
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
	std::cout << "Индекс максимального элемента:  " << ind11 << " " << ind12 << "\n"; // << "max " << max1 - вывод максимального значения
	std::cout << "Индекс минимального элемента:  " << ind21 << " " << ind22 << "\n"; // << "min " << min1 - вывод минимального значения


	// ДЗ Задание 4  - Обратный пузырёк
	std::cout << "\nЗадание 4  - Обратный пузырёк " << "\n";

	// Обьявление массива, списка инициализации
	int arr4[] = { 112, 32, 31, 14, 55, 36, 72, 54, 21, 68 };
	// Определение размерности массива
	const int size4 = sizeof(arr4) / sizeof(int);

	std::cout << "Массив до сортировки: ";

	// Вывод неотсортированного массива на экран
	for (int i = 0; i < size4; i++)
	{
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n";

	// Сортировка массива от меньшего к большему. "Алгоритм Обратный пузырек".
	std::cout << "Массив после сортировки: ";
	for (int i = 0; i < size4; i++)
	{

		for (int j = size4 - 1; j > 0; j--)
		{

			if (arr4[j] < arr4[j - 1]) // Сравнение текущего значения с предыдущим.
			{
				int b = arr4[j];	   // Перестановка (переприсваивание) значений массива.
				arr4[j] = arr4[j - 1];
				arr4[j - 1] = b;
			}

		}
		// Вывод отсортированного массива на экран
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n\n";


	// Вывод отсортированного массива
	/*
	for (int i = 0; i < size4; i++)
	{
		std::cout << arr4[i] << " ";
	}
	std::cout << "\n";
	*/
	

	// Пример другого кода "Обратный пузырек"
	/*
	int i, j;
	int mass[size];
	srand(std::time(nullptr));
	for (i = 0; i < size; i++)
	{
		mass[i] = rand() % 99;
	}
	std::cout << "Массив до сортировки: ";
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
	std::cout << "Массив после сортировки: ";
	for (i = 0; i < size; i++)
	{
		std::cout << mass[i] << " ";
	}
	std::cout << "\n";
	return 0;
	*/
}






// Пример обьявление массива, списка инициализации. 
// Вывод значений массива в строчку через запятую
/*std::string students[10] = {
	   "Иванов", "Петров", "Сидоров",
	   "Ахмедов", "Ерошкин", "Выхин",
	   "Андеев", "Вин Дизель", "Картошкин", "Чубайс"};

   for (int i = 0; i < 10; i++) {
	   std::cout << students[i] << " , ";
   }

   return 0;
}*/