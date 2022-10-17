
// wap to take two characters ,if this characters are equal then print the same but if 
// they are unequal then print their difference.

#include<stdio.h>

void main(){

	char ch1,ch2;

	printf("enter first char:\n");
	scanf("%c",&ch1);
	
	printf("enter first char:\n");
	scanf(" %c",&ch2);

	if(ch1 == ch2){
	
		printf("ch1 = %c , ch2 = %c\n",ch1,ch2);
	}
	else if(ch1 > ch2){
	
		printf("%d \n",ch1-ch2);
	
	}else if(ch2 > ch1){
	
		printf("%d\n",ch2-ch1);
	
	}

}
