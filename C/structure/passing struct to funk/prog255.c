
// unnamed structure or annonymous structure

#include<stdio.h>

struct {

	int x;
	int y;
}
obj = {10,20};

void main(){

//	struct obj = {1.2};  	// here we cant able to create obj

	printf("%d\n",obj.x);
	printf("%d\n",obj.y);
}
