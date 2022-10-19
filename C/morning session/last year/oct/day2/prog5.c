#include<stdio.h>

void main(){

        int row;
        printf("enter no of rows");
        scanf("%d",&row);

        char ch1 ;
	

        for(int i = 1; i<=row ; i++){

                ch1 = 'A'+row+i-2;

                for(int j = 1 ; j<=row ; j++){

                        if(i%2 == 1){

                                printf("%c ",ch1);
                                ch1--;
                        }
                        else{

                                printf("%c ",ch1+32);
				ch1++;
                        }
                }
                printf("\n");

		
        }

}

