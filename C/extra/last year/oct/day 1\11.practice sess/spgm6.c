/*
 D c B a
 a B c D
 F e D c
 b C d E
  */
#include<stdio.h>
void main(){
	int n ;
	printf("Enter rows : ");
	scanf("%d",&n);
	char ch,ch3;
	
	char ch1 = 'A';
	char ch2 = 'A'+n-1;
	for(int i = 1;i<=n;i++){
		if(i%2==0){
			ch = ch1;
			for(int j = 1;j<=n;j++){
				if((i+j)%2==0){
					printf("%c ",ch);
					ch++;
				}else{
					printf("%c ",ch+32);
					ch++;
					
				}
			}
			ch1++;ch2++;
			printf("\n");
		}else{
			ch3= ch2;
			for(int j = 1;j<=n;j++){
				if((i+j)%2==0){
					printf("%c ",ch3);
					ch3--;
				}else{
					printf("%c ",ch3+32);
					ch3--;
				}
			}
			ch2++;
			printf("\n");
		}
	}	


}
