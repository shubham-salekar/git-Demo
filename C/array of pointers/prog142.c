
#include<stdio.h>

void main(){

	char arr1[3] = {'A','B','C'};
	char arr2[3] = {'D','E','F'};
	char arr3[3] = {'G','H','I'};

	char* cparr[] = {arr1,arr2,arr3};

	printf("%d\n",sizeof(cparr));

	cparr[0] = arr1+1;
	cparr[1] = arr2+2;
	cparr[20] = arr3;

	printf("%c\n",*(cparr[0]));
	printf("%c\n",*(cparr[1]));
	printf("%c\n",*(cparr[2]));

}
