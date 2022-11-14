
// fgetc() and fputc()

#include<stdio.h>

void main(){

	FILE *fp1 = fopen("success.txt","r");
	FILE *fp2 = fopen("property.txt","w");

	char ch;
	while((ch = fgetc(fp1)) != -1){
	
		fputc(ch,fp2);

	}

}
