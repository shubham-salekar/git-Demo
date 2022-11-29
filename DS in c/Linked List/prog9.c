
#include<stdio.h>
#include<string.h>

typedef struct Batsman{

	int jerNo;
	char pName[20];
	float avg;
	struct Batsman *next;

}bman;

void main(){

	bman obj1,obj2,obj3;

	bman *head = &obj1;

	(*head).jerNo = 007;
	strcpy((*head).pName,"M S Dhoni");
	(*head).avg = 80.22;
	(*head).next = &obj2;

	(*(*head).next).jerNo = 18;
	(*(*head).next).avg = 75.00;
	strcpy((*(*head).next).pName,"KING KOHLI");
	(*(*head).next).next = &obj3;

	(*(*(*head).next).next).jerNo = 10;
	strcpy((*(*(*head).next).next).pName,"Master Blaster");
	(*(*(*head).next).next).avg = 75.22;
	(*(*(*head).next).next).next = 0;


	printf("%d\n",(*(*head).next).jerNo);
//	printf("%s\n",head->next->pName);

	printf("%f\n",head->next->avg);
	printf("%s\n",head->next->pName);
	printf("%p\n",head->next->next);
		

l
