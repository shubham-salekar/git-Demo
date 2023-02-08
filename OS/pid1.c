#include<stdio.h>
#include<unistd.h>

void main(){

	int pid = fork();

	printf("pid = %d\n",getpid());
	printf("ppid = %d\n",getppid());
}
