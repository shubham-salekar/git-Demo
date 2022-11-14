
#include<stdio.h>

typedef struct bike{

	int rnum;
	char company[20];
	float price;

}//struct bike __typeof__ humsafar = {9201,"bajaj",2.5};

humsafar = {9201,"bajaj",2.5};		//error : we cant able to give values bacause it is typedef not object.
  

void main(){

	struct bike obj = { 0013,"honda",98.5};

	humsafar obj2= {9855,"herohonda",70.6};
}

