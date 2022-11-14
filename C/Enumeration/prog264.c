
#include<stdio.h>

struct emp {

	int x:9;
	int y;
	float z;
}obj1;

void main(){

	printf("%p\n",&obj1.x);	   //error : not able to print the address of bit field
	printf("%p\n",&obj1.y);
	printf("%p\n",&obj1.z);
}
