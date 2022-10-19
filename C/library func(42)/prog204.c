
// string compare ignore case

//  incopmlete 

#include<stdio.h>
#include<string.h>

int mystrcmpi(char* str1 , char* str2){

	while(*str1 != '\0'){

		if(*str1 == *str2){

			str1++;
			str2++;
		}else{
		
			return *str1-*str2;
		}

	}
	return 0;

}
void main(){

	char str1[] = "shubham";
	char str2[] = "Shubham";

	if(strlen(str1) == strlen(str2)){
		
		int diff = mystrcmpi(str1,str2);

		if(diff == 0){
	
			printf("String are equal\n");
		}else{
	
			printf("String are not equal\n");
		}
	}else{
	
		puts("strings are not equal");
	}
}
