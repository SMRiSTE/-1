#include <iostream>

struct person {
	int score;
	std::string name;
	double sum0;
};

void get_personal(person& p, int sum) {
	p.sum0 = sum;
}

int main() {
	setlocale(LC_ALL, "Russian");

	person per;
	int sum1;
	std::cout << "Введите номер счёта: ";
	std::cin >> per.score;
	std::cout << "Введите имя владельца: ";
	std::cin >> per.name;
	std::cout << "Введите баланс: ";
	std::cin >> per.sum0;
	std::cout << "Введите новый баланс: ";
	std::cin >> sum1;
	get_personal(per, sum1);
	std::cout << "Ваш счёт: " << per.name << ", " << per.score << ", " << per.sum0;
}