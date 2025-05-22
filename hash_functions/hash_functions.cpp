#include <iostream>
#include <map>


int main() {
	std::map<std::string, unsigned> products {
		{"bread", 30}, {"milk", 80}, {"apple", 60}
	};

	//�� 17 ��������� (value.first (key), value.second (value)

	for (const auto& value : products) {
		std::cout << value.second << std::endl;
	}
	
	//�������� ������� � 17 ���������:

	for (const auto& [pKey, pValue] : products) {
		std::cout << pKey << '\t' << pValue << std::endl;
	}


}