
#include<stdio.h>

register int y=20;		//error : hyala jaga datasection madhe milat nahi jari globally declare kela asla tari.

void main(){

	//register int x = 10;		//error
	int x = 10;


	printf("%p",&x);
}
