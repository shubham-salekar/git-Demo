
// copy string to n number

// incomplete


#include<stdio.h>

char* mystrncpy(char* str2 , char* str1 , int n){

	int count = 0;

	for(int i=0 ; i<n && *(str1+i) != '\0' ; i++){	     // i<n && *(str1+i) !='\0' is for lower down the iterations when number of n is greater
							     // than length of string.
	
		*(str2+i) = *(str1+i);

		count++;
	}
	printf("count = %d\n",count);

	printf("in mystrncmp = %s\n",str2);
	
//	*str2 = '\0';
//	printf("in mystrncmp = %s\n",str2);

	return str2;
}
void main(){

	int n = 4;

	char str1[] = "Shubham";
	char str2[20];

	puts(str1);
	puts(str2);

	mystrncpy(str2,str1,n);

	puts(str1);
	puts(str2);
}

