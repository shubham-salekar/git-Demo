
#include<stdio.h>

union employee{

	int empid;
	float empsal;
};
void main(){

	// problem : we dont able to give intializer list at the time of union
	union employee obj1 = {122,59.3};

	printf("%d\n",obj1.empid);
	printf("%f\n",obj1.empsal); 	// 0.00 , warning : in union memory is allocate to one variable at a time
					
	printf("%p\n",&obj1.empid);
	printf("%p\n",&obj1.empsal); 	

	// solution : initialize variable one by one
	
	union employee obj2;

	obj2.empid = 52;
	printf("%d\n",obj2.empid);
	printf("%p\n",&obj2.empid);
	
	obj2.empsal = 12.5;
	printf("%f\n",obj2.empsal); 
	printf("%p\n",&obj2.empsal); 
	

/*	printf("%d\n",obj2.empid);		// when we print both variable its give garbage value to integer
	printf("%f\n",obj2.empsal);	*/
}
