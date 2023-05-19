
// classes and object

#include<iostream>

class player {

	public:

	int jerNo = 18;
	char name[20] = "virat kohli";

//	public:

	void disp(){
		
		std::cout<< jerNo << std:: endl;
		std::cout<< name << std:: endl;
	}
};

int main(){

	player obj;
		
	std::cout<< obj.jerNo << std:: endl;
	std::cout<< obj.name << std:: endl;

	obj.disp();

	std::cout<< &obj << std:: endl;
	return 0;
}

