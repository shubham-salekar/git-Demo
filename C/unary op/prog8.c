
#include<stdio.h>

int x = 10;

void fun(){

	int y = 20;
	int ans;

	ans = ++x + ++y;
	printf("%d\n",ans);


}
void main(){

	printf("in main\n");
	fun();

	printf("%d\n",x);
	printf("End main\n");



}
