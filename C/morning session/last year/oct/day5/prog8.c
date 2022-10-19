

#include<stdio.h>
void main(){

	int start,end;
	printf("Enter start & end \n");
	scanf("%d%d",&start,&end);

	for(int i = start ; i<=end ; i++){

		int sum = 0;

		for(int j = 1 ;j<i ; j++){
		
			if(i%j == 0){

				sum =sum+j;
			}
		}
		if(i==sum){
	
			printf("%d ",i);

		}
		
	}
	printf("\n");
}
