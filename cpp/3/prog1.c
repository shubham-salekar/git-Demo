#include<stdio.h>

struct player{

	char name[20];
	int jerNo;
};
void main(){

	struct player obj;
	
	printf("Enter player name\n");
	fgets(obj.name,13,stdin);
	puts(obj.name);

	
	printf("Enter jerNo\n");
	scanf("%d",&obj.jerNo);
	printf("%d\n",obj.jerNo);
	
}
