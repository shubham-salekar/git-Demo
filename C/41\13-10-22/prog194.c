
#include<stdio.h>

void printstring(char arr[]){

	puts(arr);

}
void stringprint(char *arr){

	puts(arr);

}
void main(){

	char arr[20];
	printf("Enter name\n");
	gets(arr);

	printstring(arr);
	stringprint(arr);

}
