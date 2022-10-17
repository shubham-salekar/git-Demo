
#include<stdio.h>

void main(){

	double d = 130.50;
	char ch = 'A';

	double *ptr1 = &d ;
	char *ptr2 = &ch;

	printf("%lf\n",d);
	printf("%c\n",ch);

//	printf("%c\n",&ch);

	printf("%p\n",ptr1);
	printf("%p\n",ptr2);

	printf("%lf\n",*ptr1);
	printf("%c\n",*ptr2);


}
