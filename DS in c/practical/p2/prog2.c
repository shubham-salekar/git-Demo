
#include<stdio.h>
#include<stdlib.h>

typedef struct node{

	char str[20];
	struct node *next;

}node;
node *head = 0;

node* createnode(){

	node* newnode = (node*)malloc(sizeof(node));

	int i = 0;
	char ch;
	getchar();

	printf("enter string\n");

	while((ch = getchar() ) != '\n'){
	
		(*newnode).str[i] = ch;
		i++;
	}
	(*newnode).str[i] = '\0';

	newnode->next = 0;

	return newnode;
}
void addnode(){

	node *newnode = createnode();

	if(head == NULL){
	
		head = newnode;
	}else{
	
		node *temp = head;

		while(temp->next != 0){
		
			temp = temp->next;
		}
		temp->next = newnode;
	}
}
void str_length(){

	int len;
	printf("Enter len to find string of same size\n");
	scanf("%d",&len);

	if(head == 0){
	
		printf("LL is empty\n");
	}else{
	
		node *temp = head;

		int flag = 0;

		while(temp != NULL){
		
			char *str = &temp->str[0];

			int count = 0;

			while(*str != '\0'){
			
				count++;
				str++;
			}
			if(count == len){
			
				printf("%s\n",temp->str);
				flag = 1;
			}
			temp = temp->next;
		}
		if(flag == 0){
		
			printf("no string present of len %d\n",len);
		}
	}

}
void printll(){

	if(head == NULL){
	
		printf("LL is empty\n");
	}else{
	
		node *temp = head;
		while(temp->next != 0){
		
			printf("| %s |->",temp->str);

			temp = temp->next;
		}
		printf("| %s |",temp->str); 
	}
}
	
int countnode(){
	
	node *temp = head;
	int count = 0;
	while(temp != 0){

		count++;
		temp = temp->next;
	}
	return count;
}
void rev_str(){

	if(head == NULL){
	
		printf("LL is empty\n");
	}else{
	
		node *temp = head;

		while(temp != 0){
		
			char *str1 = &temp->str[0];

			int len = 0;
			while( *str1 != '\0'){
			
				len++;
				str1++;
			
			}
			str1--;

			char *str2 = &temp->str[0];
			
			char ptr;

			for(int i=0 ; i<=len/2 ; i++){
			
				ptr = *str2;
				*str2 = *str1;
				*str1 = ptr;

				str2++;
				str1--;

			}
			temp = temp->next;

		}
	}

}
void delete_first(){

	node *temp = head;

	head = head->next;

	free(temp);
	

}
void delete_last(){

	node *temp = head;

	while(temp->next->next != 0){
	
		temp = temp->next;
	}
	free(temp->next);
	temp->next = 0;

}
void delete_atpos(int num){

	int pos = num;

	if(head == NULL){
	
		printf("LL is empty\n");
	}else{
	
		int count = countnode();
		
		if(pos <= 0 || pos >=count+2){
		
			printf("invalid pos\n");
		}
		else if (pos == count){
		
			delete_last();
		}
		else if(pos == 1){
		
			delete_first();
		}
		else {
		
			node *temp1 = head;

			while(pos-2){
			
				temp1 = temp1->next;
			}
			node *temp2 = temp1;
			temp1 ->next = temp1->next->next;
			free(temp2);
		}
	}
}
void str_equallength(){

	int len;
	printf("enter length (keep str of given input)\n");
	scanf("%d",&len);

	node *temp = head;

	int count1 = 0;

	while(temp != 0){
	
		count1++;
		char *str1 = &temp->str[0];

		int count2 = 0;
		while(*str1 != '\0'){
		
			count2++;
			str1++;
		}
		if(count2 != len){
		
			delete_atpos(count1);
			count1 = 0;
		}
		
		temp = temp->next;

	}
}
void main(){

	char choice;

	do{
	
		printf("1.addnode\n");
		printf("2.prinll\n");
		printf("3.strings of given size\n");
		printf("4.string reverse\n");
		printf("5.string of given length\n");

		int ch;
		printf("enter choice\n");
		scanf("%d",&ch);


		switch(ch){
		
			case 1:
				addnode();
				break;
			case 2:
				printll();
				break;
			case 3:
				str_length();
				break;
			case 4:
				rev_str();
				break;
			case 5:
				str_equallength();
				break;
			default:
				printf("invalid choice\n");
		
		}

		printf("Do u want to continue\n");
		scanf(" %c",&choice);

	}while(choice == 'y' || choice == 'Y');
}
