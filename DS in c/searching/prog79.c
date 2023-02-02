
// ispresent , last occurance , secondlast occurance

#include<stdio.h>

int ispresent(int size,int arr[],int ele){

	for(int i=0 ; i<size ; i++){
	
		if(arr[i] == ele){
		
			return i;
		}
	}
	return -1;
}
int lastocc(int size,int arr[],int ele){

	int store = -1;

	for(int i=0 ; i<size ; i++){
	
		if(arr[i] == ele){
		
			store = i;
		}
	}
	return store;
}
int seclastocc(int size,int arr[],int ele){

	int store = -1;
	int seclast = -1;

	for(int i=0 ; i<size ; i++){
	
		if(arr[i] == ele){
		
			seclast = store;
			store = i;
		}
	}
	return seclast;
}

void main(){

	int arr[] = {1,5,3,4,5,7,9,5};
	char choice;

	do{
		printf("1.ispresent\n2.last Occurance\n3.secondlast Occurance\n");

		int ch;
		printf("Enter choice\n");
		scanf("%d",&ch);

		switch(ch){
		
			case 1:{
			       
				      printf("Enter element for searching\n");
				      int ele;
				      scanf("%d",&ele);

				      int ret = ispresent(8,arr,ele);

				      if(ret == -1){
				      
					      printf("Element not found\n");
				      }else{
				      		
					      printf("element is present\n");
				      }
			       }
			       break;
			 case 2:{
			
					int ele;
					printf("Enter element for last occurance\n");
					scanf("%d",&ele);
					
					int ret = lastocc(8,arr,ele);
					if(ret == -1){
					
						printf("Element not found\n");
					}else{
					
						printf("last occurance is at index %d\n",ret);
					}
				}	
				break;
			case 3:{
			       
					int ele;
					printf("Enter element for second last occurance\n");
					scanf("%d",&ele);
					
					int ret = seclastocc(8,arr,ele);
					if(ret == -1){
					
						printf("Element not found\n");
					}else{
					
						printf("last occurance is at index %d\n",ret);
					}
				}	
				break;
			default:
				printf("Wrong choice\n");

		}
		getchar();
		printf("Do u want to continue\n");
		scanf("%c",&choice);

	}while(choice == 'y' || choice == 'Y');
}
