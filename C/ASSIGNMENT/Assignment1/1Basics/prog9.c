//
//prog 9 = sum of first 10 odd numbers
#include <stdio.h>

void main(){
	int x , y;
	int sum = 0;
	int count = 0;

	printf("enter a no.\n");
	scanf("%d",&x);

	printf("enter a second no.\n");
	scanf("%d",&y);
	
	for (int i = x; i<=y ; i++){

		if (i%2 == 1){

			sum = sum + i;
			count++;
			
			if (count==10) {
			
				break;
			
			}
		}
	}
	printf(" sum of first 10 odd no is:%d\n",sum);

}
