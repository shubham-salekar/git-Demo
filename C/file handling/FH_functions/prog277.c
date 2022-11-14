
#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","r");
	char ch ;

	int count = 0;
	while((ch = fgetc(fp)) != EOF){
		
		printf("%c",ch);
		count++;
	}
	printf("%d\n",count);

}
