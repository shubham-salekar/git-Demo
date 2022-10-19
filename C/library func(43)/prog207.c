
// string lower without using library function

#include<stdio.h>

char* mystrlwr(char* str){

	while(*str != '\0'){
	
		if(*str>=65 && *str<=96){
		
			*str = *str+32;
		}
		str++;

	}
	return str;

}
void main(){

	char str[] = "SHUbhaM";

	puts(str);

	mystrlwr(str);

	puts(str);
}
