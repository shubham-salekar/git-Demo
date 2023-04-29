#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ispalindrom(char str1[],int len){

	char *ptr1 = str1;
	char *ptr2 = &str1[len-1];

	while(ptr1<ptr2){
	
		if(*ptr1 == *ptr2){
		
			ptr1++;
			ptr2--;
		}else
			return false;
	}
	return true;
}
void main(){

	char str1[20];
	printf("Enter string 1\n");
	scanf("%[^\n]",str1);

	int len1 = strlen(str1);
	
	bool ret = ispalindrom(str1,len1);
	if(ret == true)
		printf("string is palindrom\n");
	else
		printf("string is not palindrom\n");

}
