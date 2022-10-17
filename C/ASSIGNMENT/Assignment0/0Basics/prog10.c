
//prog10

#include<stdio.h>
void main(){
	char x;

	printf("Enter a character:\n");
	scanf(" %c",&x);

	if(x==97 || x==101 || x==105 || x==111 || x==117){
	
		printf(" %c is vowel.\n",x);
	
	}else if(x==65 || x==69 || x==73 || x ==79 || x==85 ){
		printf(" %c is vowel.\n",x);
	
	}else{
		printf(" %c is consonant.\n",x);
	
	}
	


}
