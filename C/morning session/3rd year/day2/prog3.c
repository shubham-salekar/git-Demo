
// check whether given input is alphabet or digit or spetial character
// 
// i/p = *
// o/p = * is special character.



#include<stdio.h>

void main(){

	char input;
	printf("Enter input\n");
	scanf("%c",&input);

	if((input>=65 && input<=90) || (input>=97 && input<=122)){
	
		printf("input is alphabet\n");

	}else if(input>=48 && input<=57){
	
		printf("input is digit\n");
	}else{
	
		printf("input is special character\n");
	}
	
}

