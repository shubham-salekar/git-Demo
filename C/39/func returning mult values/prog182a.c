#include<stdio.h> 

int fun(int x,int y,int add,int sub){

	add = x+y;
	sub = x-y;

	//return add sub;   // eka veli multiple value return karta yet nahit

	return add ;	    // ani ashyaprakare kelya tari nahi hot
	return sub;
}
void main(){

	int x = 10;
	int y = 20;

	int add;
	int sub;

	//int z = fun(x,y,add,sub);
	
	fun(x,y,add,sub);

	printf("%d\n",add);
	printf("%d\n",sub);

	//printf("%d\n",z);

}

