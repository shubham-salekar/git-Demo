
// reverse string

#include<stdio.h>

void main(){

	char str[20];

	printf("enter string to be reversed\n");

	//gets(str);
	fgets(str,20,stdin);
	//puts(str);
	
	char *temp1 =str;

	while(*temp1 != '\0')
		temp1++;

	temp1--;

	char *temp2 = str;
	
	while(temp2 < temp1){
	
		char x = *temp1;
		*temp1 = *temp2;
		*temp2 = x;

		temp1--;temp2++;
	}
	
	printf("after reverse\n");
	//puts(str);
	printf("%s\n",str);
	

	
	
}
