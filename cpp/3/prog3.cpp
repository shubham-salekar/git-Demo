
int z{};			// by default zero ghet

#include"iostream"

	
//int z{};	// by default zero ghet

int main(){

	int x = 10;
	int y(20);

	std::cout << &x <<std::endl;
	std::cout << y <<std::endl;

	//int z{};			// by default zero ghet
	std::cout << z <<std::endl;

}
