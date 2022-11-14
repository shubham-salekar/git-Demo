//
//fopen();

#include<stdio.h>

void main(){

	FILE *fp = fopen("c2w.txt","r");	// if there is menstion file in folder then it gives nil address nad if there is file 
						// then it gives adress of that file  

	//FILE *fp = fopen("c2w.txt","w"); 	// if there is no such file in folder then w makes new file and gives address of that
						// file . read(r) dont have this type of ability

	printf("%p\n",fp);
}
