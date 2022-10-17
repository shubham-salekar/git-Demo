/*program 9: Take an input number from the user and print the number in reverse
Input: 120654
Output: 456021
*/

#include<stdio.h>

void main(){

	int x;
	int rem = 0;

	printf("enter a num:\n");
	scanf("%d",&x);

	while(x!=0){
	
		rem = x%10;
		printf("%d",rem);
		
		x=x/10;
		
	}
	

}
