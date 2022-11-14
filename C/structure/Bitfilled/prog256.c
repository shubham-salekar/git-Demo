
#include<stdio.h>

#pragma pack(1)

struct demo{

/*	char ch;
	int x:1;
	int y;
*/

	int x:6;
	int y:2;

/*
	int x:2;
	double y:2;	// error : didnt work for double and float
*/	
};
void main(){

	printf("%ld\n",sizeof(struct demo));
}
