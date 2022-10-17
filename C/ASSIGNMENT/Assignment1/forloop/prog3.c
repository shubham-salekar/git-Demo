
#include<stdio.h>

void main(){
	
	int x,y;

	printf("enter start:\n");
	scanf("%d",&x);

	printf("enter range end:\n");
	scanf("%d",&y);

	
	for(int i = x ; i<=y; i++ ){
	
		if(i%2 == 1){
			
			printf("%d ",i);
		
		}
		i++;	
	}
	printf("\n");

	for(int i = y ; i>=x ;i--){
	
		if(i%2 == 0){
		
			printf("%d ",i);
		
		}
		i--;
	
	
	}
	



}
