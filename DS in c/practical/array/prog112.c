
#include<stdio.h>

int rangesum(int arr[],int query,int size){

	int start,end;
	for(int i=0 ; i<query ; i++){
	
		printf("ENter eange\n");
		scanf("%d%d",&start,&end);

		if(start <= -1 || end > size){
			printf("plese enter valid range\n");
			i--;
		}else{

			int sum = 0;
			for(int i=start ; i<=end ; i++){
		
				sum = sum+arr[i];
			}
			printf("sum = %d\n",sum);
		}

	}
}
void main(){

	int size;
	printf("enter array size\n");
	scanf("%d",&size);

	int arr[size];
	for(int i=0 ; i<size ; i++){
	
		scanf("%d",&arr[i]);
	}

	int q;
	printf("enter query number\n");
	scanf("%d",&q);

	rangesum(arr,q,size);


}
