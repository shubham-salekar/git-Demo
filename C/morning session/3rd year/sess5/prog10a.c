/*									       ----------
						// using power math function : INCOMPLETE
Enter number of rows							       ```````````
4
-	-	-	1	
-	-	4	9	
-	64	125	216	
2401	4096	6561	10000	

*/

#include<stdio.h>
#include<math.h>

void main(){

	double row;
	printf("Enter number of rows\n");
	scanf("%lf",&row);

	double num = 1;

	for(int i=1 ; i<=row ; i++){
	
		for(int j=1 ; j<=row-i ; j++){
		
			printf("-\t");
		}

		for(int k=1 ; k<=i ; k++){
	
			double num1 = pow(num,i);

			printf("%lf\t",num1);
			num++;
		}
		printf("\n");
	}
}
