// malloc

#include<stdio.h>
#include<stdlib.h>
#include"string.h" 


struct ott{
       	
	char pname[10];
	int ucount;
	float price;
};
void main(){

	struct ott *ptr1 = (struct ott*)malloc(sizeof(struct ott));

	strcpy(ptr1 ->pname,"prime video\t");
	ptr1->ucount = 100.00;
	ptr1->price = 350.50;

	printf("%s\n",ptr1->pname);
	printf("%d\n",ptr1->ucount);
	printf("%f\n",ptr1->price);
}
