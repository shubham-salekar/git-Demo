/*Write a program to print the addition of 1 to 10 with 10 to 1.
Output:
1 + 10 = 11
2 + 9 = 11
3 + 8 = 11
.
.
10 + 1 = 1
*/
#include<stdio.h>

void main(){

	int x=1;
	int y=10;
	int sum = 0;

	for(int i = 1;i<=10 ; i++){
	
		sum = x+y ;
		printf("%d + %d = %d\n ",x,y,sum);
		x++;
		y--;
	
	}


}
