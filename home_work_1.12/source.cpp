#include <iostream>
#include <fstream>

// Для задачи 1 - Функция, в которую передают массив по указателю и выводят на экран. 
void print(int* number_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
	}

}

int main(int argc, char** argv)
{
	// Конспект занятия "Работа с файлами"
	/* // Для этих операций в C++ существует библиотека <fstream>.
	std::ifstream — для работы с файлом в режиме только на чтение
● std::ofstream — для работы с файлом в режиме только на запись
● std::fstream — для работы с файлом в режиме на чтение и на запись
	*/
	// Тип данных std::ifstream используется, если нужно открыть файл только для чтения.Переменная типа std::ifstream создаётся следующим образом :
	std::ifstream fin("in.txt"); // открыли файл C:\in.txt на чтение
	int rows, cols, i,j;
	if (!fin.is_open()) {
		std::cout << "File in.txt not open" << "\n";
		return 1;
	}
	fin >> rows;
	fin >> cols;
	
	//std::cout << "rows: " << rows << " " << "cols: " << cols << "\n";

	std::string** any_Array = new std::string * [rows]; // создаём массив указателей (int*). Сам массив будет иметь тип int**
	for (int i = 0; i < rows; i++)
	{
		any_Array[i] = new std::string[cols]; // для каждой ячейки массива arr создаём массив целых чисел и кладём указатель на вновь созданный массив в эту ячейку
	}
	while (!fin.eof())
	{
		fin >> i;
		fin >> j;
		any_Array[i][j] = "*";
		std::cout << "i: " << i << " " << "j: " << j << "\n";
	}
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			std::cout << any_Array[i][j] << ' ';
		}
		std::cout << "\n";
	}
	fin.close();



	//setlocale(LC_CTYPE, "rus");

	//// Задача 1. Вывод массива.
	//std::cout << "\nЗадача 1. Вывод массива. " << "\n";

	 return 0;
}