//linear que using array

#include<stdio.h>

int front = -1;
int rear = -1;
int size = 0;

int flag = 0;

int enque(int arr[]){

	if(rear == size-1){
	
		return -1;
	}else{
	
		if(front == -1 && rear == -1){
		
			front++;
		}
		rear++;
		printf("Enter data\n");
		scanf("%d",&arr[rear]);

		return 0;
	}
}
int dequeue(int arr[]){

	if(front == -1){
		
		flag= 0;
		return -1;
	}else{
		flag = 1;	
		int val = arr[front];

		if(front == rear){
		
			front = -1;
			rear = -1;
		}else{
	
			front++;
		}
		return val;

	}	
}
int frontt(int arr[]){

	if(front == -1){
	
		flag = 0;
		return -1;
	}else{
	
		flag = 1;
		return arr[front];
	}
}
int printQ(int arr[]){

	if(front == -1){
		return -1;
	}else{
		for(int i=front ; i<= rear ; i++){
		
			printf("%d ",arr[i]);
		}
		return 0;
	}
}
void main(){

	char choice;
	printf("Enter size of array\n");
	scanf("%d",&size);

	int arr[size];

	do{
	
		printf("1.enque\n2.dequeue\n3.frontt\n4.printQueue\n");

		int ch;
		printf("Enter your choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
			       int ret = enque(arr);
			       if(ret == -1){
			       
				       printf("queue is full OR overflow\n");
			       }
			       }
			       break;
			case 2:{
			       	int ret = dequeue(arr);
				if(flag == 1){
				
					printf("%d is dequeued\n",ret);
				}else{
				
					printf("Q is empty\n");
				}
			       }
			       break;
			case 3:{
			       	int ret = frontt(arr);
				if(flag == 0){
					printf("Q is empty\n");
				}else{
				
					printf("front = %d\n",ret);
				}
			       }
			       break;
			case 4:{
			       
				int ret = printQ(arr);
				if(ret == -1){
					printf("Que is empty\n");
				}
			       }
			       break;
			default:
			       printf("invalid choice\n");
			       break;

		}
		getchar();
		printf("Do u want to continue\n");
		scanf("%c",&choice);

	}while(choice == 'Y' || choice == 'y');
}
