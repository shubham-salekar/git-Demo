//
//prog 10 = products of first 10 odd numbers
#include <stdio.h>

void main(){
	int x , y;
	int count = 0;
	int prod = 1;

	printf("enter a no.\n");
	scanf("%d",&x);

	printf("enter a second no.\n");
	scanf("%d",&y);
	
	for (int i = x; i<=y ; i++){
		if (i%2 == 1){

			prod = prod * i;
			count++;
			
			if (count==10) {
			
				break;
			
			}
		}
	}
	printf(" prod of first 10 odd no is:%d\n",prod);

}
