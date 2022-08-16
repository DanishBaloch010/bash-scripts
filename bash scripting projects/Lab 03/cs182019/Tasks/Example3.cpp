#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
	cout<< "0 Process Number = "<<getpid()<<endl; 
	fork();
	cout<< "1 Process Number = "<<getpid()<<endl; 
	return 0;
	
}
