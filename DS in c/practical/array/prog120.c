
// carry forward array ass practice

#include<stdio.h>

int subarr(char arr[],int size){

	int count = 0;
	char x,y;
	printf("Enter two subsequences\n");
	scanf(" %c",&x);
	scanf(" %c",&y);

	for(int i=0 ; i<size ; i++){

		if(arr[i] == x){

			for(int j=i+1 ; j<size ; j++){
		
				if (arr[i] == x && arr[j] == y)
					count++;
			}
		}
	}
	return count;

}
void main(){

	int size;
	printf("Enter array size\n");
	scanf("%d",&size);

	char arr[size];
	printf("Enter String\n");

	/*for(int i=0 ; i<size ; i++){
	
		scanf(" %c",&arr[i]);
	}*/
	getchar();

	gets(arr);

	int ret = subarr(arr,size);

	printf("subsequence is %d times\n",ret);
	
}
