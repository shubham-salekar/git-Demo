
#include<stdio.h>

void sub(int a,int b){

	printf("sub = %d\n",a-b);

}
void add(int a,int b){

	printf("1 = %d\n",a+b);
	printf("2 = %d\n",a+b);
	
	void (*ptr1)(int,int);
	
	ptr1 = sub;
	ptr1(40,30);

	printf("3 = %d\n",a+b);
	printf("4 = %d\n",a+b);
}
void main(){

	void (*ptr)(int,int);

	ptr = add;
	ptr(30,10);
	printf("%p\n",ptr);

	ptr++;
	printf("%p\n",ptr);

	ptr(30,40);

//	ptr++;
	printf("%p\n",ptr);

	ptr(20,40);
}
