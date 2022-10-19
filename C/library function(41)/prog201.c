// string compare using library function

#include<stdio.h>
//#include<string.h>

int strcmp(char*,char*);
//int printf(const char[],...);
int printf(const char*,...);

void main(){

	char *str1 = "shubham";
	char *str2 = "shubham ";

	int diff = strcmp(str1,str2);

	printf("Diff = %d\n",diff);

	if(diff == 0){
	
		printf("strings are equal\n");
	}else{
	
		printf("string are not equal\n");
	}
}
