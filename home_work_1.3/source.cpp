/* setlocale(LC_ALL, "rus");

  int num;
  std::string str1;
   
  std::cout << "������� �����:" << std::endl;
  std::cin >> num;
  std::cout << "�� ����� �����:" << std::endl << num << std::endl;
  std::cout << "������� �����:" << std::endl;
  std::cin >> str1;
  std::cout << "�� �����:" << std::endl << str1 << std::endl;*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    // ������� 1
    std::cout << "\n������� 1: ������� ����. ���������� \n";

    bool t = true, f = false;
    std::cout << std::boolalpha;

    std::cout << "��������: ||" << std::endl;
    std::cout << "true   true   " << (t || t) << std::endl;
    std::cout << "false  true   " << (f || t) << std::endl;
    std::cout << "true   false  " << (t || f) << std::endl;
    std::cout << "false  false  " << (f || f) << std::endl;

    std::cout << "" << std::endl;

    std::cout << "��������: &&" << std::endl;
    std::cout << "true   true   " << (t && t) << std::endl;
    std::cout << "false  true   " << (f && t) << std::endl;
    std::cout << "true   false  " << (t && f) << std::endl;
    std::cout << "false  false  " << (f && f) << std::endl;

    // ������� 2
    std::cout << "\n������� 2: ����������� ����� \n";

    int a, b, c;
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "\n";
    std::cout << "������� ������ �����: ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << "������� ������ �����: ";
    std::cin >> c;
    std::cout << "\n";

    int max = a > b
        ? a > c
        ? a : c
        : b > c
        ? b : c;
    int min = a < b
        ? a < c
        ? a : c
        : b < c
        ? b : c;
    int avr = a + b + c - max - min;
    std::cout << "���������: " << max << " " << avr << " " << min << std::endl;

    // ������� 3
    std::cout << "\n������� 3: �������� \n";

    int age;
    std::string condition1, condition2;
    std::cout << "������� ��� (�/�): ";
    std::cin >> condition1;
    std::cout << "\n";
    std::cout << "������� ���� �������: ";
    std::cin >> condition2;
    std::cout << "\n";
    std::cout << "������� �������: ";
    std::cin >> age;
    std::cout << "\n";

    if ((condition1 == "�" || condition1 == "�") && (condition2 == "����" || condition2 == "��������" || condition2 == "���") && age > 40)
    {
        std::cout << "���� ������������: \n";
        std::cout << "������� ����� ������������ ����. ����� �������� ����, ��� ������ �������� ����� �����������.";
    }
    else if ((condition1 == "�" || condition1 == "�") && (condition2 == "�����" || condition2 == "����" || condition2 == "�������") && age >= 15 && age <= 30)
    {
        std::cout << "���� ������������: \n";
        std::cout << "����������� ����� �������� ��� ������� � ��������, ���������� �������� ���������� � ����������������� ���������. ����� �� ������ ������, �� � ���������: ������� ����, ������� ������� ����.";
    }
    else
    {
        std::cout << "�������� ��� ��� ��������� � ����������.\n��������� ������� ����� ;)";
    }
}
