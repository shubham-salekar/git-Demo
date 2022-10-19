/*  
	# 
      * # * 
    * * # * * 
  * * * # * * * 
* * * * # * * * * 
  * * * # * * * 
    * * # * * 
      * # * 
        # 

*/
#include<stdio.h>

void main(){

	int row;
	printf("Enter row size\n");
	scanf("%d",&row);

	int iteration = row-2;
	int position = row/2;;

	for(int i = 1 ; i<=row ; i++){
	
		if(i <=row/2+1){
		
			for(int j=row/2 ; j>=i ; j--){
			
				printf("  ");
			}
			for(int k=1 ; k<=i*2-1 ; k++){
			
				if(i==k){
					printf("# ");
				}else{
				
					printf("* ");
				}
			}
		}else if(i>row/2+1){
		
			for(int j=row/2+2 ; j<=i ; j++){
			
				printf("  ");

			}
			for(int k=1 ; k<=iteration ; k++){
			
				if(k==position){
				
					printf("# ");
				}else{
				
					printf("* ");
				}
			}
			position--;
			iteration-=2;
		}
		printf("\n");
	}
}
