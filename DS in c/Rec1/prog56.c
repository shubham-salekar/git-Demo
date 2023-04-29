
#include<stdio.h>

int taildemo(int x){

	if(x==1){
	
		return 1;
	}
	return taildemo(--x);
}
void main(){

	int ret = taildemo(4);
	printf("%d\n",ret);
}
