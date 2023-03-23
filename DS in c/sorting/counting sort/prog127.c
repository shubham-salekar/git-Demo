
#include<stdio.h>
#include<string.h>

void main(){

	int flag = 0;
	char str1[] = "shashi";
	char str2[] = "Ashish";

	int len = strlen(str1);

	for(int i=0 ; i<len ; i++){
	
		char temp = str1[i];

		for(int j=0 ; j<len ; j++){
		
			if(temp == str2[j]){
			
				flag++;
				str2[j] = '0';
				break;
			}
		}
	}
	if(flag == len)
		printf("anagram string\n");
	else
		printf(" not anagram string\n");

	puts(str2);


}
