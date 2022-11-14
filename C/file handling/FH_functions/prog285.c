
#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","r");

	fseek(fp,10,0);

	char ch;

	while((ch = fgetc(fp)) != -1){
	
		printf("%c",ch);
	}

}

