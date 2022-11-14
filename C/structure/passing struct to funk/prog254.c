
#include<stdio.h>

struct demo{

	int x;
	float y;

};
void fun(struct demo obj){

	printf("%d\n",obj.x);
	printf("%f\n",obj.y);


}
void gun(struct demo *ptr){

	printf("%d\n",ptr->x);
	printf("%f\n",(*ptr).y);
}
void main(){

	struct demo obj = {10,25.5};

	fun(obj);
	gun(&obj);

}
