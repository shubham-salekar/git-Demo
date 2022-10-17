#include<stdio.h>

void other(int value){

	printf("entered value in main is %d\n",value);

}
void main(){

	int value;
	printf("Enter values:\n");
	scanf("%d",&value);

	other(value);
}
