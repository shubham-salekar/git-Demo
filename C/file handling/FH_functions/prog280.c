
// fgets and fputs 

#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","r");

	char compname[20];
	fgets(compname,13,fp);

	puts(compname);
}

