
#include"iostream"

int main(){

	int x = 10.5f;		//no error:normal intialization la error yet nahi
	int y(20.5f);

	std::cout << "size of x= " << sizeof(x) << std::endl;
	std::cout << "size of y= " << sizeof(y) << std::endl;
	
	std::cout << x <<std::endl;
	std::cout << y <<std::endl;

	//int a{10.5d};		//error: uniform initialzation la error yeto : copy and direct la convrsion cha error yet nahi
	double b{10.5f};

	std::cout << "size of a= " << sizeof(a) << std::endl;
	std::cout << "size of b= " << sizeof(b) << std::endl;
	
	std::cout << a <<std::endl;
	std::cout << b <<std::endl;

}
