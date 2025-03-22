#include <iostream>


// Для задачи 1 - Функция, в которую передают массив по указателю и выводят на экран. 
void print(int* number_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << "number_arr[" << i << "]: " << number_arr[i] << std::endl;
	}

}

// Для задачи 2 - Функция, в которую передают адреса 2х переменных в ОЗУ и она меняет их, изменяя значения этих переменных. 
void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

// Для задачи 3 - Функция, в котору передают массив по указателю, которая принимает на вход массив произвольного размера 
// и «разворачивает» его в обратную сторону — то есть первый элемент становится последним и наоборот.. 

	void reverse(int* reverse_arr, int reverse_size)
	{
		std::cout << "До функции reverse: " << "\n";

		for (int i = 0; i < reverse_size; ++i)
		{
			std::cout << reverse_arr[i] << " ";
		}

		std::cout << "\nПосле функции reverse: " << "\n";
		
		int* new_arr = new int[reverse_size]();			// Обьявили новый массив размера reverse_size, все элементы которго 0. () = все элементы равны 0.
														// Заранее не знаем какой размерности будет массив, поэтому сделаем его динамическим - выделим ему место в динамической памяти.
														// В динамической памяти выделили место для указателя на этот массив, в дальнейшем очистим эту память delete[] new_arr;
		int j = 0;
		for (int i = reverse_size - 1; i !=-1; i--)		// Присвоим ему в обратном порядке значения полученного массива reverse_arr
		{
			new_arr[j] = reverse_arr[i];
			
			//std::cout << new_arr[j] << " ";	// Only for Debug
			j++;
		}
		//std::cout << "\n";					// Only for Debug
		int g = 0;										// Переприсвоим массиву reverse_arr значения как в массиве new_arr - сделаем их одинаковыми.
		for (int i = 0; i < reverse_size; i++)		
		{
			
			reverse_arr[g] = new_arr[i];
			std::cout << reverse_arr[g] << " ";
			g++;
		}
		delete[] new_arr;
			
		std::cout << "\n\n";
		
		/*int tmp;
		for (int i = 0; i < reverse_size / 2; ++i)
		{
			tmp = reverse_arr[i];
			reverse_arr[i] = reverse_arr[reverse_size - i - 1];
			reverse_arr[reverse_size - i - 1] = tmp;
		}

		for (int i = 0; i < reverse_size; ++i)
		{
			std::cout << reverse_arr[i] << " ";
		}*/
	}
	
// Конспект занятия "Указатели. Массивы и параметры функций"
/*
// Чтобы узнать тип переменной или литерала, применяется оператор typeid.

int main(int argc, char** argv)
{

// Использование оператора typeid выглядит так :
double number = 5.6;
std::cout << "type of number variable: " << typeid(number).name() << std::endl;
std::cout << "type of number literal 10.4: " << typeid(10.4).name() << std::endl;
std::cout << "type of number literal 3: " << typeid(3).name() << std::endl;
return 0;
}

*/

int main(int argc, char** argv)
{
	setlocale(LC_CTYPE, "rus");

	// Задача 1. Вывод массива.
	std::cout << "\nЗадача 1. Вывод массива. " << "\n";

	int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int size1 = sizeof(arr1) / sizeof(int);
	print(arr1, size1);
	std::cout << "\n";

	int arr2[] = { 6, 5, 4, 8 };
	int size2 = sizeof(arr2) / sizeof(int);
	print(arr2, size2);
	std::cout << "\n";

	int arr3[] = { 1, 4, 3, 7, 5 };
	int size3 = sizeof(arr3) / sizeof(int);
	print(arr3, size3);
	


	// Задача 2. Снова swap
	std::cout << "\nЗадача 2. Снова swap. " << "\n";

	int a = 5, b = 8;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	swap(&a, &b);
	std::cout << "a = " << a << ", b = " << b << std::endl;


	// Задача 3. Переворот массива.
	std::cout << "\nЗадача 3. Переворот массива. " << "\n";

	int reverse_arr[] = { 111, 27, 36, 45, 54, 63, 72, 81, 9 };
	int reverse_size = sizeof(reverse_arr) / sizeof(reverse_arr[0]);
	reverse(reverse_arr, reverse_size);
	
	std::cout << "\n\n";

	
	/*
	int number_arr[] = {2,3,4,5};
	fun(number_arr, 4);

	//for (int i = 0; i < reverse_size; i++) // Only for Debug
	//{
	//	std::cout << reverse_arr[i] << " ";
	//}

	// std::cout << "reverse_size : " << reverse_size << "\n";
	//std::cout << "sizeof(reverse_arr) : " << sizeof(reverse_arr) << "\n";
	//std::cout << "typeid(reverse_arr[0]).name() : " << typeid(reverse_arr[0]).name() << "\n";



	int numer = 100; // Проинициализировали переменную типа int, так же она имеет свой адрес в ОЗУ

	// Вывести адрес переменной numer в ОЗУ можно с помощью &numer
	std::cout << &numer << std::endl;

	// Получить обратно значение перменной из ее адреса в ОЗУ можно с помощью указателя *(&numer) - разименовать переменную.
	std::cout << *(&numer) << std::endl;

	std::cout << std::endl;

	// Можно записать адрес в отдельную переменную
	int second = 1;
	int* adress = &second; // указатель int *

	char char_1 = 'Hi';
	char* adress_1 = &char_1; // указатель char *
	
	// Вывести адрес переменной second в ОЗУ можно с помощью указателя int* adress
	std::cout << adress << std::endl;

	// Получить обратно значение перменной из ее адреса в ОЗУ можно с помощью указателя *(adress) - разименовать переменную.
	std::cout << *adress << std::endl;

	// Определим и выведем какой тип данных у указателя и посмотрим сколько он занимает места в ОЗУ
	std::cout << "type of number variable: " << typeid(adress).name() << std::endl;
	std::cout << "sizeof: " << sizeof(adress) << std::endl;

	// Определим и выведем какой тип данных у указателя и посмотрим сколько он занимает места в ОЗУ
	std::cout << "type of number variable: " << typeid(adress_1).name() << std::endl;
	std::cout << "sizeof: " << sizeof(adress_1) << std::endl;

	//// Вопрос для собеса - сколько занимает места указатель? (в 32х разрядной ОС - 4 байта, в 64х разрядной ОС - 8 байт)


	// Указатели и массивы
	int arr[] = { 2, 3, 4 };

	// Попробуем узнать какой тип данных у массива
	std::cout << "type of number variable: " << typeid(arr).name() << std::endl;
	std::cout << arr << std::endl; // Получаем адресс в памяти ОЗУ. Массив ведет себя как указатель

	// Используем указатель, чтобы записать адрес массива в переменную arr_ptr
	int* arr_ptr = arr;
	std::cout << arr << std::endl; // Получим адрес первого элемента массива
	std::cout << arr_ptr << std::endl; // Получим адрес первого элемента массива
	std::cout << &arr[0] << std::endl; // Получим адрес первого элемента массива
	
	/*
	auto int_ptr = new int(100);
	delete int_ptre;

	auto int_ptr = new int[100];
	delete[] int_ptr;
	*/


	// Передача массива в функцию.
	// Есть три способа, которыми можно передать автоматический (локальный) массив в качестве аргумента функции:
	// - с указанием размера 
	// - без указания размера массива
	// - как указатель
	
 

	return 0;
}