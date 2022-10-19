// print strong numbers in given range
// in = 100
//    = 1000
//op = 145

#include<stdio.h>

void main(){

	int start,end;
	printf("enter start number and end num\n");
	scanf("%d%d",&start,&end);

	for(int i = start ; i<=end ; i++){

		int rem = 0;
		int sum = 0;

		int var1 = i;

		while(var1 !=0){
	
			rem = var1%10;

			int fact = 1;
			for(int j = rem ; j>=1 ; j--){
		
				fact = fact*j;
			}
			sum = sum + fact;
			var1 = var1/10;
		}
		if(sum == i){
	
			printf("%d\n",i);
		}
	}
	printf("\n");


}
