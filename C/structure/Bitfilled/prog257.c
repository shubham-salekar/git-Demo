
#include<stdio.h>

#pragma pack(1) 
struct demo{

	int x:4;
	int y;
};
void main(){

	struct demo obj = {15,500};

	//struct demo obj = {16,400};

	printf("%ld\n",sizeof(obj));

}
