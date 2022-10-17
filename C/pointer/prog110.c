
#include<stdio.h>
void main(){

	char ch1 = 'A';
	char ch2 = 'B';
	char ch3 = 'C';

	char *ptr = &ch1;

	printf("%p\n",ptr);	// 0xch1
	printf("%c\n",*ptr);	// A

	printf("%p\n",(ptr+1)); 	//0xch1 + 1 ( B )
	printf("%c\n",*(ptr+1));	// B

	printf("%p\n",(ptr+2));		//0xch1 +2 (c)
	printf("%c\n",*(ptr+2));	//C
}
