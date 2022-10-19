
// string upper without using library function

#include<stdio.h>

char* mystrupp(char* str){

	while(*str != '\0'){
	
		if(*str>=97 && *str<=122){
		
			*str = *str-32;
		}
		str++;

	}
	return str;

}
void main(){

	char str[] = "shubhAm";

	puts(str);

	mystrupp(str);

	puts(str);
}
