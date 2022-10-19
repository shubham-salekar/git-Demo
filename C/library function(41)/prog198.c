
#include<stdio.h>

char* mystrcpy(char *str2,char *str1){

	while(*str1 != '\0'){
	
		*str2 = *str1;
		str2++;
		str1++;
	}
	return str2;

}

void main(){

	char *str1 = "Shubham";
	char str2[20];

	puts(str1);
	puts(str2);

	mystrcpy(str2 , str1);

	puts(str1);
	puts(str2);
}
