// structure

#include<stdio.h>
#include<string.h>

struct cricplayer{

	int jerno;
	char pname[10];
	float sal;
}obj1 = {18,"virat",5.0};

void main(){

	struct cricplayer obj2;

	obj2.jerno = 45;
	strcpy(obj2.pname,"Rohit");
	obj2.sal = 5.2;

	printf("%d\n",obj1.jerno);
	printf("%s\n",obj1.pname);
	printf("%f\n",obj1.sal);

	printf("%d\n",obj2.jerno);
	printf("%s\n",obj2.pname);
	printf("%f\n",obj2.sal);

}
