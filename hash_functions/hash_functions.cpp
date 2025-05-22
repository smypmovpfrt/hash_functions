#include <vector>
#include <iostream>
#include <array>


int main() {
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