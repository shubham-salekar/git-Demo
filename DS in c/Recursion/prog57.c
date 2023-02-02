
#include<stdio.h>

int tail(int x){

	if(x==1){
	
		return 1;
	}
	return 3+tail(--x);
}
void main(){

	int ret = tail(4);
	printf("%d\n",ret);
}
