
#include<stdio.h>			//10 20 30			
void main(){				//40 50 60
					//70 80 90

	int arr[3][3] = {10,20,30,40,50,60,70,80,90};

	printf("%d\n",arr[0][2]);	//30
	printf("%d\n",arr[1][0]);	//40
	printf("%d\n",arr[2][1]);	//80
	
	printf("%p\n",arr);		//
	printf("%p\n",arr[0]);
	printf("%p\n",arr[1]);
	printf("%p\n",arr[2]);
	
	printf("%p\n",&arr[0][2]);
	printf("%p\n",&arr[1][1]);
	printf("%p\n",&arr[2][0]);
}
