//prog1

#include<stdio.h>
void main(){

	int num ;
	char chr;
	float rs;
	double crMoney;

	printf("Enter number:\n");
	scanf("%d",&num);

	printf("Enter Character:\n");
	scanf(" %c",&chr);

	printf("Enter float:\n");
	scanf("%f",&rs);

	printf("Enter double value:\n");
	scanf("%lf",&crMoney);

	printf("num:%d\n",num);
	printf("chr:%c\n",chr);
	printf("rs:%f\n",rs);
	printf("crMoney:%lf\n",crMoney);

	printf("Size of num :%ld\n",sizeof(num));
	printf("Size of chr  :%ld\n",sizeof(chr));
	printf("Size of rs :%ld\n",sizeof(rs));
	printf("Size of crMoney :%ld\n",sizeof(crMoney));

}	
