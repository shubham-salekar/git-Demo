
#include<stdio.h>
#include<string.h>

struct ott{

	char pname[20];
	int account;
	float price;

};
void main(){

//	struct obj1 = {"Netflix",3,466.90};
	struct ott obj;

	char pname[20];
	printf("enter platform name\n");
	gets(pname);
//	gets(obj.pname);

	int account;
	printf("Enter number of accounts\n");
	scanf("%d",&account);
//	scanf("%d",&obj.account);

	float price;
	printf("Enter subscription price\n");
	scanf("%f",&price);
//        scanf("%f",&obj.price);

	strcpy(obj.pname,pname);
	obj.account = account;
	obj.price = price;

	printf("%s\n",obj.pname);
	printf("%d\n",obj.account);
	printf("%f\n",obj.price);

}
