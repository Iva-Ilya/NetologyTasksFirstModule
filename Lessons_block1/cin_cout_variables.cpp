
// ���� � ����� ������, ����������� �������
/*#include <iostream> // ��� ����������� ������������� �����
// ���� ��� ��� ����� ��� �������� ��� ����������� ����������
// ���������� ��������� ������� �������
// ��������, ������� ��� ������ ���������� �� �����:
// std::cout
 int main()
{
	std::cout << "Hello World!" << std::endl;
	std::cout << std::endl;
	std::cout << 42 << std::endl;
	std::cout << -3.14 << std::endl;
} */


// ���������� - Variables
/*int main()
{
	// ��� ���_����������_1, ���_����������_2, ...;
	int a, b, c;
	char CharName; 
*/

// �����.���� �++ - �����������������; 
/* 
��� ������ ���������� � ������� �������
char name;
char Name;

 ���������� C++-������������� �������������� ���������� ������ ���������� ����������:
 */

 
// �������������
/* 
int main()
{
int a; // ���������� �������������������� ���������� ������ ����
// ���� ���������� �� ����������������, �� � ��� ����� ���������� �����-��
// ��������� ��������
a = 8; // � ���������� a ������ ��������� ����� 8
int a = 10; // ������!
// ������ ������� ��� ���� ���������� � ����� �� ������
a = 10; // ��� ��� �����
// ������ �������� � ������������ ����������
double pi = 3.14; // ���������� � ���������� ����������
// ������������ ����� �������� ���������������
*/

/*
int main()
{
int intVar = 12;
long longVar = -12147483648;
double doubleVar = 2.7;
bool boolVar; // ���������� �� ����������������!
boolVar = true;
char charVar = 'c';
std::string strVar = "Hello world";
strVar = 12; // ������!
// � ��� string ������ �������� ����� ����� (int)
}
*/


// ����� �������� ������ � �������
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


// ���� ���������� ������ � �������
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


// ���� ������ ������ � �������
/*
#include <iostream>
int main()
{
std::string str;
std::cout << "Enter some text: ";
std::getline(std::cin, str);
std::cout << "Your text is: " << str << std::endl; // ���� ��� ���� ���� - ������ ������ � ���������
}
*/


// ����� ���������� ������ � �������
/*
#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
setlocale(LC_CTYPE, "rus"); // ����� ������� ��������� ������. ����� ������ ������������ LC_ALL
cout << "��������� � �������\n";
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


// �� ������� �����/�����
// �� ����� �����/�����
/*
#include <iostream>

int main()
{
  setlocale(LC_ALL, "rus");

  std::string str1;
  std::string str2;

  std::cout << "������� �����:" << std::endl;
  std::getline(std::cin, str1);
  std::cout << "�� ����� �����:" << std::endl << str1 << std::endl;

  std::cout << "������� �����:" << std::endl;
  std::getline(std::cin, str2);
  std::cout << "�� �����:" << std::endl << str2 << std::endl;
}
*/