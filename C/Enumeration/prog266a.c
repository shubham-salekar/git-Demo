
#include<stdio.h>

enum partnars{

	shubham,
	anant = 4,
	ashish,
	harshal
};
void main(){

	int x = anant;
	int y = ashish;

	printf("%d\n",shubham);		// bydefault 0
	printf("%d\n",x);		// we assign 4 here in enum partnars

	printf("%d\n",y);		// assign 4 in enum that increases forward one by one that's why 5 
}
