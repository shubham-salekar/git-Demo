#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(){

	int pid = fork();

	if(pid>1){
		
		for(int i=1 ;i<=5 ; i++){
			printf("parent pid = %d\n",getpid());
			printf("ajoba ppid = %d\n",getppid());
		}
	}else if(pid == 0){
	
		for(int i=1 ;i<=10 ; i++){

			printf("in child\n");
			sleep(2);
			printf("child pid = %d\n",getpid());
			printf("child parent pid = %d\n",getppid());
		}

	}else
		return -1;
}
