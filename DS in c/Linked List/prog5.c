
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct fridge{

	int starR;
	char cname[10];
	float capacity;
};
void main(){

	typedef struct fridge sf;

	sf *ptr = (sf*)malloc(sizeof(sf));

	strcpy(ptr -> cname,"godrej");
	ptr->starR = 4;
	ptr->capacity = 340.5;

	printf("%d\n",ptr->starR);
	printf("%s\n",ptr->cname);
	printf("%f\n",ptr->capacity);
}
