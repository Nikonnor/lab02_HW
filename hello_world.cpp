// Вводим необходимые библиотеки.
#include <iostream>
#include <string>

int main() // Задаем главную функцию.
{
	std::string name; // Задаем новую переменную 'name' типа string.
	std::cout << "Введите имя пользователя: "; std::cin >> name; // Задаем переменную 'name' через стандартный поток ввода.
	std::cout << "Hello world from " << name << "!" << std::endl; // Выводим результат работы программы.
	return 0;
}