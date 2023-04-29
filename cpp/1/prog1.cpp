#include<iostream>

int main(){

	std::cout<< "hello from 0013"<<std::endl;
	std::cerr << fileno(stdin) << std::endl;
	std::clog << fileno(stdout) << std::endl;
	std::clog << fileno(stderr) << std::endl;
	//std::cout << fileno(stdlog) << std::endl;
	return 0;
}
