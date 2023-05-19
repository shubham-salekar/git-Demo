
#include<iostream>

extern int main(){

	int y = 20;
	int x = 10;

	//int &z = y;
	//z++;

	std::cout << x << std::endl;
	std::cout << y << std::endl;

	const int * const ptr = &x;
	std::cout<< *ptr << std::endl;

	//ptr = &y;
	*ptr = 500;
	std::cout<< *ptr << std::endl;

}
