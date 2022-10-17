
#include<stdio.h>

int i = 10;
char ch = 'A';

void main(){

	float f = 25.25;
	double d = 35.555;

	int *ptr1 = &i ;

	char *ptr2 = ch;

	float *ptr3 = &f;
	double *ptr4 = &d;

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);
	printf("%p\n",ptr3);
	printf("%p\n",ptr4);

	printf("%d\n",*ptr1);
	printf("%f\n",*ptr3);
	printf("%c\n",*ptr4);

//	printf("%c\n",*ptr2);

}
