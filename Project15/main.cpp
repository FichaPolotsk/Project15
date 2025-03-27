#include <iostream>

int main() {
	setlocale(LC_ALL, "ru");
	int choose = 10;
	choose = 100 % 9;
	if (choose == 1 and choose == 2) {
		std::cin >> choose;
	}
	else {
		std::cout << "1";
	}
	//Проверка


}