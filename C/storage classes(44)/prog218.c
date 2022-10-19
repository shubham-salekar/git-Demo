
// local static variable

#include<stdio.h>

void fun(){

	static int x = 10;    // static variable la jaga datasection madhe milte
			      // distana jari global sarkha disat asel tari astana local sarkha asto
			      // scop limited to present function.
	++x;
	printf("%d\n",x);

}
void main(){

	fun();
	fun();
	fun();
}
