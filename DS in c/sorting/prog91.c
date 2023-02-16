
// incomplete

#include<stdio.h>
#include<string.h>

void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);
	char* sarr[5];

	printf("enter strings\n");

	for(int i=0 ; i<size ; i++){
	
//		scanf("%[^\n]",sarr[i]);

		gets(&sarr[i]);		
	}
	getchar();
	for(int i=0 ; i<size ; i++){
	
		printf("%s\n",&sarr[i]);	
	}
	getchar();
}
