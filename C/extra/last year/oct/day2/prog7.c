// wap to print first copmosite no between given range
// i/p = start = 20
// 	 end = 30
// o/p = 20 is first composite


#include<stdio.h>

void main(){

	int start;
	printf("Enter start\n");
	scanf("%d",&start);

	int end;
	printf("Enter end\n");
	scanf("%d",&end);
	
	int count = 0;

	for(int i = start; i<=end ; i++){

		for(int j = 1 ; j<=i ; j++){

			if(i%j == 0){
		
				count++;
				if(count > 2){
			
					printf("%d is first composite\n",i);
					break;
				}
		
			}
		}
		if(count>2){
		
			break;
		}
	}
}

