#include<stdio.h>

void main(){

	int x;
	scanf("%d",&x);
	printf("%d\n",x);

	char str[20];
	scanf(" %[^\n]%*c",str);
	printf("%s\n",str);
}
