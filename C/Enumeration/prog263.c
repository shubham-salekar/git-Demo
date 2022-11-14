
#include<stdio.h>

struct emp {

	int x;
	int y;
	float z;
}obj1;

void main(){

	printf("%p\n",&obj1.x);
	printf("%p\n",&obj1.y);
	printf("%p\n",&obj1.z);
}
