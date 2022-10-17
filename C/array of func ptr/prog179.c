
// passing funtion to function

#include<stdio.h>

void add(int a,int b){

	printf("%d\n",a+b);

}
void fun(int x,int y,void (*ptr)(int ,int )){

	ptr(x,y);
}
void main(){

	fun(10,20,add);
}
