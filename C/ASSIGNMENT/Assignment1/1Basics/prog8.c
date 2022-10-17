//
//prog 8 = table of 11 in reverse order
#include <stdio.h>

void main(){
	int x ;
	int sqr = 1;

	printf("enter a no.\n");
	scanf("%d",&x);

	printf(" reverse table of %d is\n",x);
	for (int i = 10; i>=1 ; i--){

		sqr = x*i;
		printf("%d\n",sqr);
	
	}


}
