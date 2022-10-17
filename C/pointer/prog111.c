
#include<stdio.h>
void main(){

	char ch1 = 'A';
	char ch2 = 'B';


	char *ptr = &ch1;

	printf("%p\n",ptr);	// 0xch1
	printf("%c\n",*ptr);	// A

//	printf("%p\n",(ptr+1.5)); 	// error : only ptr and int add allowed : here we add double value
//	printf("%c\n",*(ptr+1.5));	// error

	printf("%p\n",(ptr+'X'));
	printf("%c\n",*(ptr+'X'));	// seg fault or garbage value


}
	
