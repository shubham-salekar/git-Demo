
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Fridge{

	char cName[20];
	int rating;
	float capacity;

};
void main(){

	struct Fridge *fptr = (struct Fridge*)malloc(sizeof(struct Fridge));

	strcpy(fptr->cName,"Godrej");
	//fptr->cName = "Godrej" ;
	
	fptr->rating = 4;
	fptr->capacity = 341.50;

	printf("%s\n",(*fptr).cName);
	printf("%d\n",(*fptr).rating);
	printf("%f\n",(*fptr).capacity);

}
