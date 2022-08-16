#include <iostream>
#include <unistd.h> 
using namespace std;

int main()
{
	cout<<"Before Forking " <<endl;
	fork();
	cout<<"After Forking " <<endl;
	return 0;
	
}

