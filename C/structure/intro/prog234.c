
#include<stdio.h>
//#pragma pack(1)

struct CricPlayer{

	double jerseyno;
	float avg;
	char grade;

};

void main(){

	struct CricPlayer Vk;

	printf("%ld\n",sizeof(Vk));
	printf("%ld\n",sizeof(struct CricPlayer));
}
