
//name mangling

#include<iostream>
/*
void fun(int x ,int y){
	
	std::cout<< x << y << std::endl;
}
*/
void fun(long x ,int y){

	std::cout<< x << y << std:: endl;
	
}
void fun(float x ,float y){

	std::cout<< x << y << std:: endl;
}
void fun(double x ,double y){

	std::cout<< x << y << std:: endl;
}
int main(){

	fun(10,20);

	fun('A','B');

	fun(10,20.5f);
	fun(10.5f,20.5f) ;
	
	fun(10.5d,20.5d) ;
	
	double z = 10.5f;
	std::cout<< "z = " << z << "\nsize = "<< sizeof(z) <<std:: endl;

	return 0;
}
