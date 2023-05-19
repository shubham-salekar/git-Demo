
#include<iostream>

int y = 40;

int main(){

	int x = 10;
	int &y = x;

	y++;
	
	if(x == y)
		std::cout << "true" << std::endl;


	std::cout << x << std::endl;
	std::cout << ::y << std::endl;

	std::cout << sizeof(x) << std::endl;	
	std::cout << sizeof(y) << std::endl;

	
	std::cout << &x << std::endl;
	std::cout << &y << std::endl;

}

