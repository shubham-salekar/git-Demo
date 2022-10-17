/*
c o r e 2 w e b 
  o r e 2 w e b 
    r e 2 w e b 
      e 2 w e b 
        2 w e b 
          w e b 
            e b 
              b 
*/
#include<string.h>
#include<stdio.h>

void main(){

	char arr[20];
	printf("Enter a string\n");
	gets(arr);

	int length = strlen(arr);
	printf("%d\n",length);

	for(int i=1 ; i<=length ; i++){
	
		for(int j=1 ; j<i ; j++){
		
			printf("  ");
		}
		for(int k=i ; k<=length ; k++){
		
			printf("%c ",*(arr+k-1));
		}
		printf("\n");
	}

}
