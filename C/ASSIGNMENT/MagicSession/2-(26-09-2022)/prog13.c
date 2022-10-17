/*
	13. WAP to print different datatype of elements using Void pointer
	int , char , float , double
*/
#include<stdio.h>
void main(){

	int x = 10;
	char ch = 'A';
	float f = 12.5f;
	double d = 40.30;

	void *iptr = &x;
	void *cptr = &ch;
	void *fptr = &f;
	void *dptr = &d;

	printf("%d\n",*((int*)iptr));
	printf("%c\n",*((char*)cptr));
	printf("%f\n",*((float*)fptr));
	printf("%lf\n",*((double*)dptr));
}
