
// nested structure way no. 2

#include<stdio.h>
#include<string.h>

struct movie{

	char mname[20];
	struct movieinfo{
	
		char actor[20];
		float imdb;
	}obj1;
};
void main(){

	struct movie obj2 = {"kantara",{"xyz",8.8}};

/*	struct movie obj2;
	strcpy(obj2.mname,"tumbaad");
	strcpy(obj2.obj1.actor,"abc");
	obj2.obj1.imdb = 8.8;
*/
}


