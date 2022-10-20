
// string concatination upto n numbars.

#include<stdio.h>

char* mystrncat(char* str1,char* str2,int n){
	
	while(*str1 != '\0'){
	
		str1++;
	}
	while(*str2 != '\0' && n !=0 ){
	
		*str1 = *str2;
		
		*str1++;
		*str2++;
		n--;
	}
	*str1 = '\0';

	return str1;
}
void main(){

	int n = 5;

	char str1[20] = "shubham";
	char str2[] = "salekar";

	puts(str1);
	puts(str2);

	mystrncat(str1,str2,n);

	puts(str1);
	puts(str2);



}
