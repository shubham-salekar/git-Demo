
#include<stdio.h>
#include<unistd.h>

int main(){

	int pid = fork();

	if(pid == 0){
	
		execlp("ps","demo",NULL);
	}else{
	
		printf("child = %d\n",pid);
	}
	printf("end\n");
}
