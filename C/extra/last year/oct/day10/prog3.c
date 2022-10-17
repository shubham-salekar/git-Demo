/*
      1 
    2 4 
  3 6 9 
4 8 12 16 
  5 10 15 
    6 12 
      7 
*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter no .of rows\n");
	scanf("%d",&row);

	int var1;
	int space = 1;

	for(int i=1 ; i<=row ; i++){
		
		var1 = i;
		if(i<=row/2+1){
		
			for(int j=row/2+1 ; j>i ; j--){
		
				printf("\t");
			}
			for(int k=1 ; k<=i ; k++){
		
				printf("%d\t",var1);
				var1 +=i;
			}
		}else{
		
			for(int j=1 ; j<=space ; j++){
			
				printf("\t");
			}
			for(int k=i ; k<=row ; k++){
			
				printf("%d\t",var1);
				var1+=i;
			}
			space++;
		}
		printf("\n");
	}

}
