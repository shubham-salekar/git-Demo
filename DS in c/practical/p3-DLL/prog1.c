#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	struct node* prev;
	int data;
	struct node* next;

}node;

node *head = NULL;

node* createnode(){

	node* newnode = (node*)malloc(sizeof(node));

	newnode->prev = NULL;

	printf("Enter data\n");
	scanf("%d",&newnode->data);

	newnode->next = NULL;

	return newnode;
}
void addnode(){

	node *newnode = createnode();

	if(head == 0){
	
		head = newnode;
		
	}else{
	
		node *temp = head;
		while(temp->next != 0){
		
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;

	}
}
void first_occurance(){

	int num;
	printf("enter number (finding first occurance)\n");
	scanf("%d",&num);

	if(head == 0){
	
		printf("Link list is empty\n");
	}
	else{
	
		int count = 0;

		node* temp = head;
		while(temp != NULL){
		
			count++;
			if(temp->data == num){
			
				break;
			}
			temp = temp->next;
		}
		printf("first occurance pos = %d\n",count);

		if(count == 0){
		
			printf("Element is not present in LL\n");
		}
	}
}
void secondlast_occurance(){

	if(head == 0){
	
		printf("Link list is empty\n");
	}else{
	
		int num;
		printf("Enter element(finding second last  occurance)\n");
		scanf("%d",&num);

		node *temp1 = head;

		int count1 = 0;
		while(temp1 != 0){
		
			if(temp1->data == num){
			
				count1++;
			}
			temp1 = temp1->next;
		}
		if(count1 == 1){
		
			printf("element present only one time\n");
		}
		else if(count1 == 0){
		
			printf("Element is not present in ll\n");
		}else{
		
			node *temp2 = head;

			int pos = 0;
			int count3 = 0;

			while(temp2 != 0){
		
				pos++;
				if(temp2->data == num){
			
					count3++;
					if(count3 == (count1-1)){
				
						printf("second last occurance pos = %d\n",pos);
						break;
					}
				}
				temp2 = temp2->next;
			}
		}
	}
}
void total_occurance(){

	int num;
	printf("Enter number to find total occurance\n");
	scanf("%d",&num);

	if(head == 0){
	
		printf("ll is empty\n");
	}else{
	
		node *temp = head;
		int count = 0;

		while(temp!=0){
		
			if(temp->data == num){
			
				count++;
			}
			temp = temp->next;
		}
		if(count == 0){
		
			printf("%d element is not present in ll\n",num);
		}else{
		
			printf("total occurance of %d is %d times\n",num,count);
		}
	}

}
void add_digits(){

	if(head == 0){
	
		printf("LL is empty\n");
	}else{
	
		node *temp = head;

		int num;

		while(temp != 0){
		
			num = temp->data;

			int sum = 0;
			int rem;

			while(num != 0){
			
				rem = num%10;
				sum = sum +rem;
				num = num/10;
			}
			temp->data = sum;

			temp = temp->next;

		}
	}

}
void palindrom(){

	if(head == 0){
	
		printf("ll is empty\n");
	}else{
	
		node *temp = head;

		int num;
		int rem;
		int pos = 0;

		int flag = 0;

		while(temp != 0 ){
		
			pos++;

			int rev = 0;
			num = temp->data;

			while(num != 0){

				rem = num % 10;
				rev = rev*10+rem;
				num = num/10;
			}
			if(rev == (temp->data)){
			
				printf("palindrom found at %d\n",pos);
				flag++;
			}
			temp = temp->next;
		}
		if(flag == 0){
		
			printf("palindrom is not present in ll\n");
		}
	}
} 
int count(){

	node *temp = head;
	int count = 0;
	while(temp != NULL){
	
		count++;
		temp = temp->next;
	}
	return count;

}
void printll(){

	node *temp = head;

	while(temp != 0){
	
		if(head == 0){
		
			printf("LL is empty\n");
		}
		else if(temp == 0){

			printf("| %d |",temp->data);
		}else{
		
			printf("| %d |->",temp->data);
		}
		temp = temp->next;
	}
}
void main(){

	char choice;

	do{
	
		printf("1.addnode\n");
		printf("2.printll\n");
		printf("3.first_occurance\n");
		printf("4.secondlast occurance\n");
		printf("5.total occurance\n");
		printf("6.add digits of elements\n");
		printf("7.palindrom\n");
		printf("8.count\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
				int n;
				printf("enter node count\n");
				scanf("%d",&n);

				for(int i=1 ; i<=n ; i++){
				
					addnode();
				}
				
			}
			       break;
			case 2:
				printll();
				break;
			case 3:
				first_occurance();
				break;
			case 4:
				secondlast_occurance();
				break;
			case 5:
				total_occurance();
				break;
			case 6:
				add_digits();
				break;
			case 7:
				palindrom();
				break;
			case 8:
				printf("total nodes = %d\n",count());
				break;
			default:
				printf("Wrong choice\n");
				break;
		}
		getchar();
		printf("Do you want to continue\n");
		scanf("%c",&choice);

	}while( choice != 'n' || choice !='N');
}








