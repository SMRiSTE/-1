#include <iostream>

struct person {
	std::string city;
	std::string street;
	int house;
	int flat;
	int index;
};

void get_personal(person& p) {
	std::cout << std::endl;
	std::cout << "Город: " << p.city << std::endl;
	std::cout << "Улица: " << p.street << std::endl;
	std::cout << "Номер дома: " << p.house << std::endl;
	std::cout << "Номер квартиры: " << p.flat << std::endl;
	std::cout << "Индекс: " << p.index << std::endl;
}

int main() {
	setlocale(LC_ALL, "Russian");

	person* person_array = new person[2];
	person_array[0].city = "Moscow";
	person_array[0].street = "Арбат";
	person_array[0].house = 12;
	person_array[0].flat = 8;
	person_array[0].index = 123456;

	person_array[1].city = "Ижевск";
	person_array[1].street = "Пушкина";
	person_array[1].house = 59;
	person_array[1].flat = 143;
	person_array[1].index = 953769;

	get_personal(person_array[0]);
	get_personal(person_array[1]);

	delete[] person_array;
}