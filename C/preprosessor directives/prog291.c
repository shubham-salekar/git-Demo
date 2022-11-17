
#include<stdio.h>

#define access 0

void main(){

	#if access
		printf("access per..\n");
	
	#else  
	printf("not EOF\n");
	
	#endif 
	printf("eof\n");
	
}
