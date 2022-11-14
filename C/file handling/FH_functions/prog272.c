
// fscanf();

#include<stdio.h>

void main(){

	FILE *fp = fopen("biencaps.txt","r");

	char ch;
	fscanf(fp,"%c",&ch);
	printf("%c\n",ch);

}
