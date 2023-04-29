
#include<stdio.h>

int totalsum(int n){

	if(n==1){
	
		return 1;
	}
	return n+ totalsum(n-1);

}
void main(){

	int sum = totalsum(5);
	printf("total sum is %d\n",sum);
}
