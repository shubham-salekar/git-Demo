
#include <stdio.h>

void main(){
	int x ;
	int sqr = 1;

	printf("enter a no.\n");
	scanf("%d",&x);

	printf("table of %d is\n",x);
	for (int i = 1; i<=10 ; i++){

		sqr = x*i;
		printf("%d\n",sqr);
	
	}


}
