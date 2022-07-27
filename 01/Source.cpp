#include <iostream>


#define MODE 1

#ifndef MODE

#error Macro MOOD required.

#endif

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

#if MODE == 1
	#include "add.h"

	std::cout << "Ðàáîòàþ â áîåâîì ðåæèìå" << std::endl;
	
	int a = 0;
	int b = 0;
	
	std::cout << "Ââåäèòå ÷èñëî 1: ";
	std::cin >> a;
	
	std::cout << "Ââåäèòå ÷èñëî 2: ";
	std::cin >> b;
	
	std::cout << "Ðåçóëüòàò ñëîæåíèÿ: " << add(a, b);
	
#elif MODE == 0
	std::cout << "Ðàáîòàþ â ðåæèìå òðåííèðîâêè" << std::endl;
#else 
	std::cout << "Íåèçâåñòíûé ðåæèì. Çàâåðøåíèå ðàáîòû" << std::endl;
#endif

	return 0;
}
