
#include<stdio.h>

struct demo1{

	int x;
	float y;
	double z;

}obj1;

union demo2{

	int a;
	float b;
	double c;
}obj2;

void  main(){

	printf("%ld\n",sizeof (obj1));	//16
	printf("%ld\n",sizeof (obj2));	//8
	
	printf("%p\n",&obj1.x);	
	printf("%p\n",&obj1.y);	
	printf("%p\n",&obj1.z);	
	
	printf("%p\n",&obj2.a);	
	printf("%p\n",&obj2.b);	
	printf("%p\n",&obj2.c);	


}
