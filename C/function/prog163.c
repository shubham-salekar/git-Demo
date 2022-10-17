
#include<stdio.h>

void fun(int,int);

void main(){

	int x,y;
	printf("Enter values\n");
	scanf("%d%d",&x,&y);

	fun(x,y);
	printf("x = %p\n",&x);
	printf("y = %p\n",&y);

}

void fun(int x,int y){

	printf("%d\n",x+y);
	printf("x =%p\n",&x);
	printf("y =%p\n",&y);
}
