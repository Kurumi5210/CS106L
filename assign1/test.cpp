#include <fstream>

int main()
{
	std::ofstream test("test.txt");
	test << "test1" ;
	// test.close();
	// test.open("test.txt");
	test << "test2";
	test.close();
	return 0;
}
