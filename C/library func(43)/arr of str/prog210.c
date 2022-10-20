
// array of stirngs :: mutable

#include<stdio.h>

void main(){

	char friends[3][10];

	char arr1[3][10] = {"Ashish","kanha" , "Rahul"};

	char arr2[3][10] = {
				{'a','s','h','i','s','h','\0'},
				{'k','a','n','h','a','\0'},
				{'r','a','h','u','l','\0'}
			   };

	printf("%p\n",&(arr1[1]));
	printf("%p\n",&(arr1[1][1]));
	printf("%p\n",arr1[2]);


}
