
#include<stdio.h>

void main(){

	int start;
	printf("enter start\n");
	scanf("%d",&start);

	int end;
	printf("enter end\n");
	scanf("%d",&end);

	for(int i = start ; i<=end ; i++){
	
		int count = 0;

		for(int j= 1 ; j<=i ; j++){
		
			if(i%j == 0){
				
				count++;
			}
		
		}
		if(count == 2){
			
			printf("%d is first prime\n",i);
			break;
		}
	
	}
}
