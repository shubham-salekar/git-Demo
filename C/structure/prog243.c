#include<stdio.h>
struct picnic{

	char location[20];
	int count;
	float distance;

};
void mystrcpy(char* dest,char* src){

	while(*src != '\0'){
	
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
void main(){

	struct picnic obj;

	mystrcpy(obj.location,"ladakh");
	obj.count = 2;
	obj.distance = 700.80;


	printf("%s\n",obj.location);
	printf("%d\n",obj.count);
	printf("%f\n",obj.distance);
}
