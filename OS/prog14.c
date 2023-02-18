
#include<stdio.h>
#include<unistd.h>

void main(){

	int pid = fork();
	printf("code area\n");
	printf("code end\n");

	printf("pid = %d\n",pid);
}
