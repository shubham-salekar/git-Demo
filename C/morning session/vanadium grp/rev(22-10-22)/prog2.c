
// void pointer

#include<stdio.h>

void main(){

	int x = 10;
	char ch = 'A';
	float f = 50.55;

	void *ptr1 = &x;
	void *ptr2 = &ch;
	void *ptr3 = &f;

	printf("%d\n",*((int*)(ptr1)));
	printf("%c\n",*((char*)(ptr2)));
	printf("%f\n",*((float*)(ptr3)));
}
