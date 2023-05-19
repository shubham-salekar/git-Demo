
//name mangling

#include<iostream>

inline int add(int x ,int y){
	return x+y;
}

inline int add(int x ,int y,int z){
	return x+y+z;
}

int main(){

	std::cout<< add(10,20) << "\n";
	std::cout<< add(10,20,30) << "\n";
}
