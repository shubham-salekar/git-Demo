/*Program 5:
WAP to print all even numbers in reverse order and odd numbers in the standard way.
Both separately. Within a range.
Input: start - 2
End - 9
Output:
8 6 4 2
3 5 7 9
*/
#include<stdio.h>

void main(){

	int x,y;

	printf("anter start\n");
	scanf("%d",&x);

	printf("anter start\n");
	scanf("%d",&y);
	

	for(int i=y ; i>=x ;i--){
	
		if(i%2==0){		
	
			printf("%d ",i);
		}			
	
	}
	printf("\n");

	for(int i=x ; i<=y ; i++){

		if(i%2==1){
				
			printf("%d ",i);

		}
		
	}
		

	
}
