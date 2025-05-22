#include <vector>
#include <iostream>
#include <array>

int GetIndex(int n) {
	if (n == 10)	return 0;
	if (n == 50)	return 1;
	if (n == 100)	return 2;
	if (n == 500)	return 3;
	if (n == 1000)	return 4;
	if (n == 2000)	return 5;
	if (n == 5000)	return 6;
}


void BadIdea() {

	//Плохой способ. Так как для маленького количества купюр выделяется большой вектор. 
	//Купюра может быть и с огромным номиналом (Африка), в векторе просто не хватит индексов...

	int nominal;
	std::vector<int> cash(5001);
	while (std::cin >> nominal) {
		cash[nominal]++;
	}

	for (int i = 0; i < cash.size(); i++) {
		if (cash[i] != 0) {
			std::cout << i << " - " << cash[i] << std::endl;
		}
	}
}

void BetterIdea() {
	int nominal;
	std::vector<int> cash(8);
	while (std::cin >> nominal) {
		cash[GetIndex(nominal)]++;
	}

	static std::array<int, 8> names = { 10, 50, 100, 200, 500, 1000, 2000, 5000 };


	for (int i = 0; i < cash.size(); i++) {
		if (cash[i] != 0) {
			std::cout << names[i] << " - " << cash[i] << std::endl;
		}
	}
}

int main() {
	BetterIdea();
}