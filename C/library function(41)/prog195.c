
// String length using library function

#include<stdio.h>
#include<string.h>

void main(){

	char arr[] = {'R','a','h','u','l','\0'};
	char *str = "Virat Kohli";

//	int lenName = strlen(arr);
//	int lenstr = strlen(str);
	
	printf("%ld\n",strlen(arr));	//5
	printf("%ld\n",strlen(str));	//11
}
