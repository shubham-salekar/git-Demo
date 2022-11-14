
// fgets and fputs 

#include<stdio.h>

void main(){

	FILE *fp = fopen("success.txt","a+");

	char compname[20] = "nvidia";

	fputs(compname,fp);
}

