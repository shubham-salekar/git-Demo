
#include<stdio.h>
void main(){

	int x;
	int count = 0;

	printf("enter a num:\n");
	scanf("%d",&x);

	printf("count of %d are:\n",x);
	for(int i = 1; x!=0; ){
	
		x = x/10;
		count++;

	}
	printf("%d\n",count);


}

