
// palindrom

#include<stdio.h>
#include<stdbool.h>

bool isPalindrom(char *ptr1 , char *ptr2){

	printf("%c ",*ptr1);
	printf("%c\n",*ptr2);
	
	if(ptr1 > ptr2 )		// >=
		return true;

	if(*ptr1 != *ptr2)
		return false;

	return isPalindrom(ptr1+1 , ptr2-1);
}
void main(){

	char str[] = "malayalam";

	int n = sizeof(str)/sizeof(str[0]);
/*	printf("%d\n",n);
	
	char *ptr = &str[n-2];
	printf("%c\n",*ptr);
*/
	bool ret = isPalindrom(str, &str[n-2]);

	if(ret==true)
		printf("true\n");
	else
		printf("false\n");

		
}
