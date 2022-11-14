
// copy 10 characters form onw file to another file.

#include<stdio.h>

void main(){

	FILE *fp1 = fopen("success.txt","r");
	FILE *fp2 = fopen("property1.txt","w");

	char ch;
	int count = 10;

	while((ch = fgetc(fp1)) != -1){
	
		if(count >= 0 )
			fputc(ch,fp2);
		else
			break;

		count--;
		
	}


}
