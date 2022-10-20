

#include<stdio.h>

//int z;    // by default 0.

void fun(register int x ,register  int y){	// by default storage class for parameter : register .
						// paramter la value assign karavich lagte other local variable pramane by default 0 or GV naste.



	int z ;	// by default GV (but sometimes 0 comes ,it also GV )
	
	int a = 10;
	register int b = 30;
	static int c = 40;
	extern int d;

	printf("%d\n",z);
}
void main(){

	fun(10,20);

//	fun(10);		// function la jevdhya values expected ahet tevdhya dyavyach lagtat
//	fun(10,20,30);		// proof : jar ass chalal ast tar error nasta ala (too few argumrnts / too many argumrnts).	


}
