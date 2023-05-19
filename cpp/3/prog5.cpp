
const int x = 100; 		//  :: => scop resolution operator => fakt global var lach chalto

//int x;
#include<iostream>

int main(){

	const int x = 10;
	std::cout << x << std::endl;
	
	{
	
		int x = 20;
		std::cout << x << std::endl;
		std::cout << ::x << std::endl;		// local level shadowing chalat nahi jar global kutla var nasel tar

		x = 30;
		std::cout << x << std::endl;

	}
	std::cout << x << std::endl;
}

//int x = 500;		// ha global level shadowing la support kart nahi
