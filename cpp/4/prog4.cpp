
// classes and object

#include<iostream>

struct player {

	int jerNo = 18;
	char name[20] = "virat kohli";

	void disp(int x){
		
		std::cout<< jerNo + x << std:: endl;
		std::cout<< name << std:: endl;
	}
};

int main(){

	player obj;
		
	std::cout<< obj.jerNo << std:: endl;
	std::cout<< obj.name << std:: endl;

	obj.disp(10);

	return 0;
}

