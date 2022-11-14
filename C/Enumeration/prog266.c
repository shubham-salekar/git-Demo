
#include<stdio.h>

enum partnars{

	ashish,
	anant,
	harshal,
	sanket,
	prasad,
	siddhesh,
	shubham,
	sid,
	yash,
	abc,
	xyz


};
void main(){

	enum partnars obj;
	printf("%ld\n",sizeof(obj));
	
	//printf("%p\n",&obj.ashish);
	
	printf("%p\n", ashish);
	printf("%p\n",shubham);
	printf("%p\n",anant);
	printf("%p\n",xyz);

/*	printf("%d\n",obj.ashish);
	printf("%d\n",obj.shubham);
*/

	printf("%d\n",ashish);
	printf("%d\n",shubham);

}
