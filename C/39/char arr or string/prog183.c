
#include<stdio.h>

void main(){

	char arr[] = {'c','o','r','e','2','w','e','b','\0'};		// \0 indicates end of string

	char *str = "Core2Web";		// \0 by default yeto

	printf("%s\n",arr);
	printf("%s\n",str);

	for(int i=0 ;i<10 ; i++){
	
		printf("%c",arr[i]);	// string chaya shevtcha \0 kadhun jar apan print kel tar garbage value pan print hote
					//  string la kalt nahi kut paryant firvaychay
	
	}
	printf("\n");


}
