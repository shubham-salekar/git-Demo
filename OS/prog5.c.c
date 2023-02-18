#include<stdio.h>
#include<unistd.h>

int main(){

	int pid = fork();

	if(pid>1){
		printf("parent pid = %d\n",getpid());
		printf("ajoba ppid = %d\n",getppid());
	}
	else if(pid == 0){
	
		printf("child pid = %d\n",getpid());
		printf("child parent pid = %d\n",getppid());
		
		execlp("/bin/mkdir","shashi",NULL);

	}else
		return -1;
}
