#include<stdio.h>

struct player{

	char name[20];
	int jerNo;
};
struct ipl {

	struct player obj;
	float avg;
};
void main(){

	struct ipl obj;
	
	printf("Enter player name\n");
	fgets(obj.obj.name,13,stdin);
	puts(obj.obj.name);

	
	printf("Enter jerNo\n");
	scanf("%d",&obj.obj.jerNo);
	printf("%d\n",obj.obj.jerNo);

	printf("enter avrage\n");
	scanf("%f",&obj.avg);
	printf("%f",obj.avg);
	
}
