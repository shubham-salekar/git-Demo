#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ipl{

	char sname[20];
	int tteams;
	double price;

};
void main(){

	struct ipl *ptr = (struct ipl*)malloc(sizeof(struct ipl));
	
	strcpy((*ptr).sname,"Tata");
	ptr->tteams = 5;
	(*ptr).price = 100;

	printf("%s\n",(*ptr).sname);
	printf("%d\n",(*ptr).tteams);
	printf("%f\n",ptr   -> price);

}
