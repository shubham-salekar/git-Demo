
// way no. 1

#include<stdio.h>
#include<string.h>

struct movieinfo{

	char actor[20];
	float imdb;

};
struct movie{

	char mname[20];
	struct movieinfo obj1;
};
void main(){

	struct movie obj2 = {"tumbadd",{"sohan shah",8}};

/*	struct movie obj2;

	strcpy(obj2.mname,"Kantara");
	strcpy(obj2.obj1.actor,"rishabh");
	obj2.obj1.imdb = 9.7;
*/
	printf("%s\n",obj2.mname);
	printf("%s\n",obj2.obj1.actor);
	printf("%f\n",obj2.obj1.imdb);


}



