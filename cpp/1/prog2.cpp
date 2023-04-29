
#include "iostream"
using namespace std;

int fun(int x){

	std::flush << "x = "<< x << std::flush;
	return 0;
} 
int main(){

	fun(10);
	return 0;
}
