
#include<stdio.h>

void main(){

	int x = 10;
	char ch = 'A';

/*	int *iptr = &x;
	char *cptr = &ch;

	printf("%d\n",*iptr);
	printf("%d\n",*cptr);
*/
	void *ptr = &x;
	printf("%d\n",*((int*)ptr));

}
