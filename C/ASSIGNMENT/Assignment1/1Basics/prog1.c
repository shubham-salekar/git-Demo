//print the first 10 capital alphabets


#include<stdio.h>

void main(){

	char x = 65;

	printf("Enter first alphabet:\n");
	scanf(" %c",&x);

	for (int i=1; i<=10 ; i++){
	
		printf(" %c\n",x);
		x++;
	}

}
