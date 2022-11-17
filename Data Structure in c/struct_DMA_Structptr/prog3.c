// ptr to struct

#include<stdio.h>

struct movie{

	char mname[10];
	int count;
	float rating;

}obj1 = {"pushpa",5,9.1};

void main(){

	typedef struct movie mv;

	mv obj2 = {"bahubali",6,9.2};

	mv *ptr1 = &obj1;
	mv *ptr2 = &obj2;

	printf("%s\n",ptr1 ->mname);
	printf("%d\n",ptr1 ->count);
	printf("%f\n",ptr1 ->rating);

	printf("%s\n",ptr2 ->mname);
	printf("%d\n",ptr2 ->count);
	printf("%f\n",ptr2 ->rating);

}
