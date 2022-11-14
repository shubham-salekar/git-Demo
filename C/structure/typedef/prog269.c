
#include<stdio.h>

typedef struct employee{

	int empid;
	char employee[20];
	float empsal;
}emp;				// here it is dont work like obj because of typedef

void main(){

	struct employee obj1 = {1700,"shubham",90.5};

	emp obj = {1256,"ashsih",95.5};

	

}
