//Stack using an array
# include <stdio.h>
# include <stdbool.h>
int top=-1 ;
int size=0 ;
int flag=0 ;

bool isFull () {
	if (top==size-1) 
		return true ;
	else 
		return false ;
}

bool isEmpty () {
	if (top==-1) 
		return true ;
	else 
		return false ;
}

int push(int stack[]) {
	if (isFull()) 
		return -1 ;
	else {
		printf("Enter data\n") ;
		top++ ;
		scanf("%d",&stack[top]) ;
		getchar() ;
		return 0 ;
	}
}

int pop (int stack[]) {
	if (isEmpty()) {
		flag=0 ;
		return -1 ;
	}
	else {
		int val=stack[top] ;
		top-- ;
		flag=1 ;
		return val ;
	}
}

int peak (int stack[]) {
	if (isEmpty()) {
		flag=0 ;
		return -1 ;
	}
	else {
		int val=stack[top] ;
		flag=1 ;
		return val ;
	}
}

void main () {
	printf("Enter size for stack\n") ;
	scanf("%d",&size) ;
	int stack[size] ;

	char choice ;
	do {
		printf("1.push\n") ;
		printf("2.pop\n") ;
		printf("3.peak\n") ;
		printf("4.isEmpty\n") ;
		printf("5.isFull\n") ;

		int ch ;
		printf("Enter choice\n") ;
		scanf("%d",&ch) ;
		getchar() ;
		
		switch(ch) {
			case 1 :
				{
					int ret ;
					ret=push(stack) ;
					if (ret==-1) {
						printf("Stack overflow\n") ;
					}
				}
				break ;
			case 2 :
				{
					int ret ;
					ret=pop(stack) ;
					if (flag==0) {
						printf("Stack underflow\n") ;
					}
					else {
						printf("%d is popped value\n",ret) ;
					}
				}
				break ;
			case 3 :
				{
					int ret ;
					ret=peak(stack) ;
					if (flag==0) {
						printf("Stack is empty\n") ;
					}
					else {
						printf("%d is peak value\n",ret) ;
					}
				}
				break ;
			case 4 :
				{
					bool ret ;
					ret=isEmpty() ;
					if (ret) {
						printf("Stack is empty\n") ;
					}
					else {
						printf("Stack is not empty\n") ;
					}
				}
				break ;
			case 5 :
				{
					bool ret ;
					ret=isFull() ;
					if (ret) {
						printf("Stack is full\n") ;
					}
					else {
						printf("Stack is not full\n") ;
					}
				}
				break ;
			default :
				printf("U entered wrong input\n") ;

		}
		printf("Do u want to continue\n") ;
		scanf("%c",&choice) ;
	}
	while(choice=='y' || choice=='Y') ;
}


				
