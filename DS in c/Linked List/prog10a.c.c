
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct employee{

	int empId;
	char empname[20];
	float sal;
	struct employee *next;

}emp;

void accessdata(struct employee *ptr){

	printf("%d\n",ptr->empId);
	printf("%s\n",ptr->empname);
	printf("%f\n",ptr->sal);
	printf("%p\n",ptr->next);
}

void main(){

	emp *emp1 = (emp*)malloc(sizeof(emp));
	emp *emp2 = (emp*)malloc(sizeof(emp));
	emp *emp3 = (emp*)malloc(sizeof(emp));

	emp *head = emp1 ;

	head ->empId = 1;
	strcpy(head->empname,"shubham");
	head->sal = 70.00;
	head->next = emp2;

	head ->next->empId = 2;
	strcpy(head->next->empname,"ashish");
	head->next->sal = 75.00;
	head->next->next = emp3;
	
	head ->next->next->empId = 3;
	strcpy(head->next->next->empname,"anant");
	head->next->next->sal = 80.00;
	head->next->next->next = NULL ;

	accessdata(emp1);
	accessdata(emp2);
	accessdata(emp3);

}
