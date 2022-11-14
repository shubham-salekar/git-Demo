#include<stdio.h>
struct player{

	char pname[20];
	int jerno;
	float rev;

};
void main(){

	struct player obj1 = {"virat",18,950.2};
	struct player obj2 = {"messi",7,1450.2};
	struct player obj3 = {"ronaldo",8,1150.2};
/*
	struct player arr[3] = {&obj1,&obj2,&obj3};
	
	for(int i=0 ; i<3 ; i++){
	
		printf("%s\n",*(arr[i].pname));
		printf("%d\n",*(arr[i].jerno));
		printf("%f\n",*(arr[i].rev));
	}*/

	struct player arr[3] = {obj1,obj2,obj3};
	
	for(int i=0 ; i<3 ; i++){
	
		printf("%s\n",arr[i].pname);
		printf("%d\n",arr[i].jerno);
		printf("%f\n",arr[i].rev);
	}

}
