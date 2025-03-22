
// Ввод и вывод данный, перемещение каретки
/*#include <iostream> // это подключение заголовочного файла
// пока что нам стоит это понимать как подключение библиотеки
// библиотеки добавляют удобные команды
// например, команду для вывода информации на экран:
// std::cout
 int main()
{
	std::cout << "Hello World!" << std::endl;
	std::cout << std::endl;
	std::cout << 42 << std::endl;
	std::cout << -3.14 << std::endl;
} */


// Переменные - Variables
/*int main()
{
	// тип имя_переменной_1, имя_переменной_2, ...;
	int a, b, c;
	char CharName; 
*/

// Имена.Язык С++ - регистрозависимый; 
/* 
Две разные переменные с разными именами
char name;
char Name;

 Сообщество C++-разработчиков придерживается нескольких стилей именования переменных:
 */

 
// Инициализация
/* 
int main()
{
int a; // объявление неинициализированной переменной целого типа
// если переменная не инициализирована, то в ней будет находиться какое-то
// случайное значение
a = 8; // в переменной a теперь находится число 8
int a = 10; // ошибка!
// нельзя сделать ещё одну переменную с таким же именем
a = 10; // вот так можно
// меняем значение в существующей переменной
double pi = 3.14; // объявление и заполнение переменной
// программисты такое называют «инициализацией»
*/

/*
int main()
{
int intVar = 12;
long longVar = -12147483648;
double doubleVar = 2.7;
bool boolVar; // переменная не инициализирована!
boolVar = true;
char charVar = 'c';
std::string strVar = "Hello world";
strVar = 12; // ошибка!
// в тип string нельзя положить целое число (int)
}
*/


// Вввод числовых данных с консоли
/*
#include <iostream>

int main()
{
  int num;

  std::cout << "Hello!" << std::endl;
  std::cout << "Enter number: ";
  std::cin >> num;
  std::cout << "Number is: " << num << std::endl;
}
*/


// Ввод символьных данных с консоли
/*
#include <iostream>
int main()
{
std::string str;
std::cout << "Enter string: ";
std::cin >> str;
std::cout << "Your string is: " << str << std::endl;
}
*/


// Ввод строки текста с консоли
/*
#include <iostream>
int main()
{
std::string str;
std::cout << "Enter some text: ";
std::getline(std::cin, str);
std::cout << "Your text is: " << str << std::endl; // Мама ела рыбу дома - строка текста с пробелами
}
*/


// Вывод символьных данных с консоли
/*
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
setlocale(LC_CTYPE, "rus"); // вызов функции настройки локали. Лучше всегда использовать LC_ALL
cout << "Кириллица в консоли\n";
return 0;
}
*/


//
/*

*/


//
/*

*/


//
/*

*/


//
/*

*/


//
/*

*/


// ДЗ Введите слово/число
// Вы ввели число/слово
/*
#include <iostream>

int main()
{
  setlocale(LC_ALL, "rus");

  std::string str1;
  std::string str2;

  std::cout << "Введите число:" << std::endl;
  std::getline(std::cin, str1);
  std::cout << "Вы ввели число:" << std::endl << str1 << std::endl;

  std::cout << "Введите слово:" << std::endl;
  std::getline(std::cin, str2);
  std::cout << "Вы ввели:" << std::endl << str2 << std::endl;
}
*/