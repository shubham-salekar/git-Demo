
// command line agument

#include<stdio.h>

void main(int argc, char* argv[]){

	printf("%s\n",argv[0]);
	printf("%d\n",argc);

	for(int i=0 ; i<argc ; i++){
	
		printf("%s\n",argv[i]);
	}
	for(int i=0 ; i<argc ; i++){
	
		printf("%p\n",argv[i]);
	}


}

