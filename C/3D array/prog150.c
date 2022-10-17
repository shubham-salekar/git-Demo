#include<stdio.h>

void main(){

	int arr1[] = {10,20,30,40};
	int arr2[] = {50,60,70,80};
	int arr3[] = {90,100,101,102};

	//int (*ptr[4])[3] = {&arr1,&arr2,&arr3};		//error
	
	int (*ptr[])[4] = {&arr1,&arr2,&arr3};		

	printf("%ld\n",sizeof(ptr));}
