/* setlocale(LC_ALL, "rus");

  int num;
  std::string str1;
   
  std::cout << "Введите число:" << std::endl;
  std::cin >> num;
  std::cout << "Вы ввели число:" << std::endl << num << std::endl;
  std::cout << "Введите слово:" << std::endl;
  std::cin >> str1;
  std::cout << "Вы ввели:" << std::endl << str1 << std::endl;*/

#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");

    // Задание 1
    std::cout << "\nЗадание 1: Вывести табл. истинности \n";

    bool t = true, f = false;
    std::cout << std::boolalpha;

    std::cout << "Оператор: ||" << std::endl;
    std::cout << "true   true   " << (t || t) << std::endl;
    std::cout << "false  true   " << (f || t) << std::endl;
    std::cout << "true   false  " << (t || f) << std::endl;
    std::cout << "false  false  " << (f || f) << std::endl;

    std::cout << "" << std::endl;

    std::cout << "Оператор: &&" << std::endl;
    std::cout << "true   true   " << (t && t) << std::endl;
    std::cout << "false  true   " << (f && t) << std::endl;
    std::cout << "true   false  " << (t && f) << std::endl;
    std::cout << "false  false  " << (f && f) << std::endl;

    // Задание 2
    std::cout << "\nЗадание 2: Упорядочить числа \n";

    int a, b, c;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "\n";
    std::cout << "Введите второе число: ";
    std::cin >> b;
    std::cout << "\n";
    std::cout << "Введите третье число: ";
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
    std::cout << "Результат: " << max << " " << avr << " " << min << std::endl;

    // Задание 3
    std::cout << "\nЗадание 3: Гороскоп \n";

    int age;
    std::string condition1, condition2;
    std::cout << "Введите пол (м/ж): ";
    std::cin >> condition1;
    std::cout << "\n";
    std::cout << "Введите знак зодиака: ";
    std::cin >> condition2;
    std::cout << "\n";
    std::cout << "Введите возраст: ";
    std::cin >> age;
    std::cout << "\n";

    if ((condition1 == "м" || condition1 == "М") && (condition2 == "рыбы" || condition2 == "скорпион" || condition2 == "рак") && age > 40)
    {
        std::cout << "Ваше предсказание: \n";
        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
    }
    else if ((condition1 == "ж" || condition1 == "Ж") && (condition2 == "телец" || condition2 == "дева" || condition2 == "козерог") && age >= 15 && age <= 30)
    {
        std::cout << "Ваше предсказание: \n";
        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок. Будет не только весело, но и интересно: найдётся дело, которое увлечёт всех.";
    }
    else
    {
        std::cout << "Гороскоп для вас находится в разработке.\nПриходите чуточку позже ;)";
    }
}
