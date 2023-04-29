#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ispalindrom(char str1[],int start,int end){

	if(start>end)
		return true;
	
	if(str1[start] == str1[end]){
	
		return ispalindrom(str1,start+1,end-1);
	}else
		return false;
}
void main(){

	char str1[20];
	printf("Enter string 1\n");
	scanf("%[^\n]",str1);

	int len1 = strlen(str1);
	
	bool ret = ispalindrom(str1,0,len1-1);
	if(ret == true)
		printf("string is palindrom\n");
	else
		printf("string is not palindrom\n");

}
