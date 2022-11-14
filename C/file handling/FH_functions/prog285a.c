
// fseek(*,int ,int)

#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","r");

	fseek(fp,-7,2);

	char ch;

	while((ch = fgetc(fp)) != -1){
	
		printf("%c",ch);
	}

}

