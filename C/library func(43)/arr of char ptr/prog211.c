
// array of character pointer :: immutable

#include<stdio.h>
char* strcpy(char*,char*);

void main(){

	char* arr1[3] = {"Ashish","Kanha","Ashish"};

	printf("%p\n",arr1[0]);
	printf("%p\n",arr1[1]);
	printf("%p\n",arr1[2]);

	puts(arr1[0]);
	printf("%p\n",arr1[0]);

	strcpy(arr1[2],"rahul");	// segmentation fault : immutable

	printf("%s\n",arr1[2]);


}

