
// string reverse 

#include<stdio.h>

long unsigned int strlen(const char*);

char* mystrrev(char*);

void main(){

	char str1[] = "shubham";

	puts (str1);
	mystrrev(str1);

	puts(str1);

}
char *mystrrev(char* str1){

	char *temp = str1;

	while(*temp != '\0'){

		temp++;
	
	}
	temp--;

	while(str1 <= temp){
	
		char x = *str1;
		
		*str1 = *temp;

		*temp = x;

		str1++;
		temp--;
	}

/*	for(int i=0 ; i<= strlen(str1)/2 ; i++){
	
		char x = *str1;
		*str1 = *temp;
		*temp = x;

		str1++;
		temp--;

	}
*/	
	return str1;


}
		
		
