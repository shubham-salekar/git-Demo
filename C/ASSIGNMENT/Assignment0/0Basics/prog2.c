//prog2

#include<stdio.h>
void main(){
	int x;
	int ans;
	int ans1;
	int ans2;
	int ans3;
	
	x=9;

	ans = ++x + x++ + ++x ;
	printf("ans = ++x + x++ + ++x\n ");
	printf("value of ans:%d\n",ans);
	printf("value of x:%d\n",x);

	ans1 = ++x + ++x + ++x + ++x ;
	printf("ans1 = ++x + ++x + ++x + ++x ;\n");
	printf("value of ans:%d\n",ans1);
	printf("value of x:%d\n",x);

	ans2 = x++ + x++ + ++x + x++ + ++x ;
	printf("ans2 = x++ + x++ + ++x + x++ + ++x ;\n");
	printf("value of ans:%d\n",ans2);
	printf("value of x:%d\n",x);

	ans3 = x++ + x++ + x++ + x++ ;
	printf("ans3 = x++ + x++ + x++ + x++ ;\n");
	printf("value of ans:%d\n",ans3);
	printf("value of x:%d\n",x);

}
