
// passing structure object

#include<stdio.h>

struct demo{

	int x;
	float y;

};
void main(){

	struct demo obj = {12,25.5};

	int arr[] = {10,20,30,40,50};

	printf("%p\n",&arr[0]);
	printf("%p\n",arr);

	printf("%p\n",obj);
	printf("%p\n",&obj);
	printf("%p\n",&obj.x);
}
