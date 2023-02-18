
#include<stdio.h>
#include<pthread.h>


void* fun(){

	printf("child2 thread\n");
	printf("child 2 = %ld\n",pthread_self());

}
void* run(){

	long int tid;
	printf("child1 thread\n");
	printf("child 1 = %ld\n",pthread_self());

	pthread_create(&tid,NULL,fun,NULL);
	pthread_join(tid,NULL);

	printf("child1 thread end\n");
}
int main(void){

	pthread_t tid;
	printf("main = %ld\n",pthread_self());

	pthread_create(&tid,NULL,run,NULL);
	pthread_join(tid,NULL);

	printf("main thread\n");
}
