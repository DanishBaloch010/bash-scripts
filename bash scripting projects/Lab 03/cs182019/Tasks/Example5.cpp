#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
using namespace std;
#define count 5

int main()
{
	pid_t pid;
	int i;
	pid=fork();
	for(i =1; i<=count; i++)
	{
		cout<<"This is from pid : "<<pid<<" and i is : "<< i << endl;
		wait(0);
	}
	return 0;
}
