#include<iostream>

int main()
{
	double pi;
	double tao;
	std::string name;
	std::cin >> pi;
	std::getline(std::cin, name);
	std::cin >> tao;
	std::cout << "my name is:" << name << " tao is:" << tao << " pi is:" << pi << '\n';
	return 0;
}


