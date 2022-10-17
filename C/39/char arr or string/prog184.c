
#include<stdio.h>

void main(){

	char carr[] = {'c','o','r','e','2','w','e','b','\0'};

	char* str = "core2web";		// constant string because stored in RO data

	printf("%s\n",carr);
	printf("%s\n",str);

	carr[4] = '3';

//	*str = 'B';		// ashaya prakare string la change karta yet nahi karan ti string constant aste 

	printf("%s\n",carr);
	printf("%s\n",str);


}
