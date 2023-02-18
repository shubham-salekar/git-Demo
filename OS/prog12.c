
#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void* run(){

	printf("child thread\n");
	printf("child = %ld\n",pthread_self());

}
int main(void){

	pthread_t tid;
	printf("main = %ld\n",pthread_self());

	pthread_create(&tid,NULL,run,NULL);
	pthread_join(tid,NULL);
//	sleep(10);

	printf("main thread\n");
}
