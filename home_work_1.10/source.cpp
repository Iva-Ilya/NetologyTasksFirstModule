#include <iostream>

// Для задачи 1 - Функция, в которую передают массив по указателю и выводят на экран. 




















// Создадим массив в функции и отдадим его вызывающему коду
//int* create_arr()
//{
//	return new int[10];
//}

// Для задачи 2 - принять от пользователя размер массива и вывести его, где все элементы равны 0
double* create_array(int size_array)
{
	double* creat_array = new double[size_array]();
	return creat_array;
}


// Для задачи 3 - 
int** create_two_dim_array(int rows, int cols)
{
	int** arr = new int* [rows]; // создаём массив указателей (int*). Сам массив будет иметь тип int**
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols]; // для каждой ячейки массива arr создаём массив целых чисел и кладём указатель на вновь созданный массив в эту ячейку
	}
	return arr;
}

void fill_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	// create_two_dim_array[rows][cols]; 
	
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			create_two_dim_array[i][j] = (i + 1) * (j + 1);
			// std::cout << create_two_dim_array[i-1][j-1] << "\t";
		}
		// std::cout << "\n";
	}

}

void print_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	for (int i = 0; i < rows; ++i) 
	{
		for (int j = 0; j < cols; ++j) 
		{
			std::cout << create_two_dim_array[i][j] << "\t";
		}
		std::cout << "\n";
	}
}

void delete_two_dim_array(int** create_two_dim_array, int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] create_two_dim_array[i]; // очищаем каждый подмассив отдельно
	}
	delete[] create_two_dim_array; // очищаем верхнеуровневый массив указателей
}


//void fun(int* number_arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
//	}
//
//}



int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");

	// Задача 1. Ввод массива с консоли.
	std::cout << "\nЗадача 1. Ввод массива с консоли. " << "\n";

	int size, element{};
	std::cout << "Введите размер массива: ";
	std::cin >> size;
	int* arr = new int[size];
	int i = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << "arr[" << i << "] = ";
		std::cin >> element;
		arr[i] = element;
		/*std::cout << arr[i] << " ";*/
	}
	
	std::cout << "Введённый массив: ";
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	delete[] arr;


	// Задача 2. Создатель массивов.
	std::cout << "\nЗадача 2. Создатель массивов. " << "\n";

	int size2;
	std::cout << "Введите размер массива: ";
	std::cin >> size2;
	double* Arr = create_array(size2);
	std::cout << "Массив: ";
	for (int i = 0; i < size2; i++)
	{
		std::cout << Arr[i] << " ";
	}
	delete[] Arr;

	// Задача 3. Динамическая таблица умножения.
	std::cout << "\nЗадача 3. Динамическая таблица умножения. " << "\n";

	int rows, cols;
	std::cout << "Введите количество строк: ";
	std::cin >> rows;
	std::cout << "Введите количество столбцов: ";
	std::cin >> cols;

	//create_two_dim_array(rows, cols);
	int **Array = create_two_dim_array(rows, cols);

	fill_two_dim_array(Array, rows, cols);
	print_two_dim_array(Array, rows, cols);
	delete_two_dim_array(Array, rows, cols);

	
	/*const int z = 10; const int y = 10;
	int a[z][y]; int s = 1, n = 1;
	for (int i = 0; i < z; ++i) {
		for (int j = 0; j < y; ++j) {
			a[i][j] = s * n;
			n++;
			std::cout << a[i][j] << "\t";
		}
		n = 1;
		s++;
		std::cout << std::endl;
	}
	*/





	/*
	// Конспект занятия Указатели. Динамическая память
	// Динамическая память.Функции malloc, calloc и free
	
	//Функция malloc объявлена в библиотеке сstdlib. Для использования функции необходимо подключить эту библиотеку. Подключение
//осуществляется с помощью препроцессорной директивы include так же, как мы подключаем библиотеку iostream для использования вывода на консоль (std::cout)
	
	// После вызова функция malloc возвращает нам указатель на область памяти, которую выделила нам операционная система.
	// Важно, что возвращаемым типом функции malloc является void* - тип указателя, который не знает, на значения какого типа он указывает.
	malloc(20); // запросили у операционной системы 20 байт памяти

	void* ptr = malloc(20); // сохранили указатель на 20 байт выделенной памяти в переменную ptr

	int* int_ptr1 = static_cast<int*>(malloc(20)); // int_ptr позволит нам работать с целыми числами. 20 байт/4 байта = 5 чисел типа int можем записать в выделенную память

	// Динамический массив. Легко выделять память под элементы разных типов, достаточно изменить тип в операторе sizeof.
	int* int_ptr2 = static_cast<int*>(malloc(29 * sizeof(int))); // в массив int_ptr поместится 29 целых чисел

	double* dbl_ptr = static_cast<double*>(malloc(13 * sizeof(double)));

	// Динамически выделенную память после использования надо очистить. 
	// Для этого используется функция free.Эта функция принимает в качестве аргумента указатель на динамически выделенную память.

	int* int_ptr3 = static_cast<int*>(malloc(20 * sizeof(int))); // создали динамический массив на 20 целых чисел
	int_ptr3[0] = 65; // использовали этот массив
	free(int_ptr3); // освобождаем память



	int* int_arr = static_cast<int*>(malloc(10 * sizeof(int)));

	// Если не проинициализировать созданный массив каким-либо значениями (если 0 - нулевой массив), то в него могут быть записаны неправильные значения (компилятор сам решаит что записать в массив)
	// Для проверки закомментировать for ниже
	for (int i = 0; i < 10; i++)
	{
		int_arr[i] = 0;

	}
	//
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << int_arr[i] << std::endl;

	}
	free(int_arr);

	// Функция calloc тоже выделяет память, как и функция malloc, однако все значения гарантированно будут равны нулю. Также работает с free
	int* int_ptr = static_cast<int*>(calloc(20, sizeof(int))); // в массив int_ptr поместится 20 целых чисел
	
	//int size = 15;
	//float* flt_ptr = static_cast<int*>(calloc(size * sizeof(float))); // приведение указателя не к тому типу у функции calloc 2 аргумента
	//flt_ptr[size] = 43.8; // выход за границы массива
	//return 0; // забыли очистить память
	
	int size1 = 15;
	float* flt_ptr = static_cast<float*>(calloc(size1, sizeof(float)));
	flt_ptr[size1 - 1] = 43.8;
	free(flt_ptr);

	// Для создания динамических переменных, содержащих одно значение, можно использовать оператор new. Для удаления - оператор delete.

	int* var = new int;// выделяем динамическую память для размещения там одного целого числа
	*var = 50; // пользуемся указателем на динамическую память
	std::cout << std::endl << *var << std::endl;
	delete(var);

	// Вопрос на собеседовании: чем отличается malloc(calloc) от new? Ответ: new вызывает конструктор для объекта(класса)
	// delete вызывает деструктор для обекта(класса)

	int* var1 = new int; // выделяем динамическую память для размещения там одного целого числа
	*var1 = 150; // пользуемся указателем на динамическую память
	delete var1; // очищаем динамическую память

	int* int_ptr4 = new int[5]; // выделяем динамический массив на 5 элементов
	delete[] int_ptr4; // очищаем память


	// Динамическая память в функциях.
			// Чтобы создать массив в функции и отдать его вызывающему коду, чтобы он смог им пользоваться, нужно использовать динамические массивы.
			/* Эта функция описана до main()
			int* create_arr()
			{
				return new int[10];
			}
			*/

			// Создадим массив указанного пользователем размера и заполним его целыми числами по порядку
			/*int size2;
			std::cout << "Введите размер массива: ";
			std::cin >> size2;
			int* arr5 = new int[size2];

			std::cout << "Ваш массив: ";

			for (int i = 0; i < size2; i++)
			{
				arr5[i] = i + 1;
				std::cout << arr5[i] << " ";
			}
			delete[] arr5;*/
			//

	return 0;
}