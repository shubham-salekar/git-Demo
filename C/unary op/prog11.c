
#include<stdio.h>

void main(){

	int x = 5;
	int ans;

	printf("%d\n",x);

//	ans=x++ + ++x;

//	ans = ++x + ++x + ++x ;	

	ans = x++ + x++ + x++ + x++ ;	

//	ans = ++x + ++x + ++x + ++x;

	printf("%d\n",x);
	printf("%d\n",ans);




}
