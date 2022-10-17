
#include<stdio.h>

void main(){

	int arr1[3] = {10,20,30};

	int arr2[3] = {40,50,60};

	
	int (*ptr1)[3] = &arr1;
	int (*ptr2)[3] = &arr2;

	/*
	printf("%d\n",**ptr1);
	printf("%d\n",**ptr2);
	*/

	//int iptarr = {(*ptr1[])3 ,(*ptr2[])3};

	int (*iptr3[2])[] = {&arr1,&arr2};

	printf("%d\n",*(*iptr3[0]));		//10
	printf("%d\n",*(*iptr3[0])+1);		//11
						
	printf("%d\n",*(*iptr3[0]+1));		//20
	
	printf("%d\n",*(*iptr3[1]));		//40
}
