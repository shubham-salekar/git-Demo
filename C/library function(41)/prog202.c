//compare String without using library function

#include<stdio.h>

//long unsigned int strlen(char*);

int mystrcmp(char* , char*);

int mystrlen(char* str){

	int count = 0;

	while(*str != '\0'){
	
		count++;
		str++;
	}
	return count;

}
void main(){

	char str1[] = "shubham";
	char str2[] = "shubha";

	if(mystrlen(str1) == mystrlen(str2)){
	
		int diff = mystrcmp(str1,str2);
		
		//printf("Diff = %d\n",diff);

		if(diff == 0){
	
			printf("String are equal\n");

		}else{
	
			printf("String are not equal\n");
	
		}
	}else{
	
		printf("Strings are not equal\n");
	}
}
int mystrcmp(char* str1,char* str2){


	while(*str1 != '\0'){
	
		if(*str1 == *str2){

			str1++;
			str2++;
		}else{
		
			return *str1 - *str2;
		}

	}
	return 0;
	
}
