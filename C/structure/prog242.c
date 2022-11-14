#include<stdio.h>
#include<string.h>

struct picnic{

	char location[10];
	int count;
	float distance;

};
void main(){

	struct picnic obj1 = {"goa",5,460.365};
	struct picnic obj2;

	//obj2.location = "kashmir"; 	//we dont able to give or define string in this type
	obj2.count = 2;
	obj2.distance = 1200.50;

	strcpy(obj2.location,"kashmir");		//this is correct way to give string value

	printf("%s\n",obj1.location);
	printf("%d\n",obj1.count);
	printf("%f\n",obj1.distance);
	
	printf("%s\n",obj2.location);
	printf("%d\n",obj2.count);
	printf("%f\n",obj2.distance);

}
