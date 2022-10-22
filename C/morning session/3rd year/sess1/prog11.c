/*

Enter num of rows 
4

1 2 3 4 
a b c d 
5 6 7 8 
e f g h 

/*
#include<stdio.h>

void main(){

	int row;
	printf("Enter num of rows \n");
	scanf("%d",&row);

	int num = 1;
	char ch = 'a';

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row ; j++){
		
			if(i%2 == 1){
			
				printf("%d ",num);
				num++;
			}else{
			
				printf("%c ",ch);
				ch++;
			}
			
		}
		printf("\n");
	}
}
