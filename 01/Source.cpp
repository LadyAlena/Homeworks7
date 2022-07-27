#include <iostream>


#define MODE 1

#if MODE == 1
	#include "add.h"
#endif

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

#ifndef MODE

#error Macro MOOD required.

#endif

#if MODE == 1
	int a = 0;
	int b = 0;
	std::cout << "������� � ������ ������" << std::endl;
	std::cout << "������� ����� 1: ";
	std::cin >> a;
	std::cout << "������� ����� 2: ";
	std::cin >> b;
	std::cout << "��������� ��������: " << add(a, b);
#elif MODE == 0
	std::cout << "������� � ������ �����������" << std::endl;
#else 
	std::cout << "����������� �����. ���������� ������" << std::endl;
#endif

	return 0;
}