#include<stdio.h>

int add(int,int);
int sub(int,int);

void main(){

	int (*ptr)(int,int);		//function pointer

	ptr = add;
	ptr(10,20);

	ptr = sub;
	ptr(30,20);
	
	//sub(30,10);

}
int add(int x,int y){

	printf("add = %d\n",x+y);
}
int sub(int x,int y){

	printf("sub = %d\n",x-y);
}
