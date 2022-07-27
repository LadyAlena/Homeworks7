#include <iostream>


#define MODE 1

#ifndef MODE

#error Macro MOOD required.

#endif

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

#if MODE == 1
	#include "add.h"

	std::cout << "Работаю в боевом режиме" << std::endl;
	
	int a = 0;
	int b = 0;
	
	std::cout << "Введите число 1: ";
	std::cin >> a;
	
	std::cout << "Введите число 2: ";
	std::cin >> b;
	
	std::cout << "Результат сложения: " << add(a, b);
	
#elif MODE == 0
	std::cout << "Работаю в режиме треннировки" << std::endl;
#else 
	std::cout << "Неизвестный режим. Завершение работы" << std::endl;
#endif

	return 0;
}
