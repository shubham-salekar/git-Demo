
#include<stdio.h>
#include<unistd.h>

void main(){

	int retvel = fork();

	printf("pid = %d\n",getpid());
	printf("ppid = %d\n",getppid());
	
	printf("retvel = %d\n",retvel);
}
