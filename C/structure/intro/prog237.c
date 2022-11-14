
#include<stdio.h>

struct Demo{

	char ch;
	int x;
	float y;
	char arr[20];
};
void main(){


	printf("%ld\n",sizeof(struct Demo));	//32
}
