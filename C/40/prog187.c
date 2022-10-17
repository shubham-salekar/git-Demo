
#include<stdio.h>

void main(){

	char name[20];

	printf("Enter String:\n");
	//scanf("%s",name);		// scanf 

	scanf("%[^\n]",name);
	//scanf ("%[^\g]",name);
	
	printf("%s\n",name);
}
