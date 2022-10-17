
#include<stdio.h>

void main(){

	char ch = 127;

//	ch = ch + 1;
//	printf("%d\n",ch);i	//-128 : wrap up extends from capacity of char (-128 to 127)

	printf("%d\n",ch+1);	//128 :  because :- run time la add hotay tyamule ahe tas print hotay

}
