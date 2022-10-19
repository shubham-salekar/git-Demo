
// String length without using library function

#include<stdio.h>

int mystrlen(char *ptr){

	int count = 0;

	while(*ptr != '\0'){
	
		count++;
		ptr++;
	}
	return count;

}

void main(){

	char name[] = {'R','a','h','u','l','\0'};
	char *str = "Virat Kohli";
	
	printf("%d\n",mystrlen(name));	//
	printf("%d\n",mystrlen(str));	//
}
