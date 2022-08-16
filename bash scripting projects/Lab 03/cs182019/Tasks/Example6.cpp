#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

int main()
{
	cout<<"Current process id : " << getpid()<<endl;
	pid_t childProcessID=fork();
	
	if(childProcessID < 0)
	{
		cout<<"Failed to create a new process " << endl;
		
	}
	else if(childProcessID == 0)
	{
		cout<<"Child Process ID : " << getpid()<<endl<<"Its Parent ID : " << getpid()<<endl;
	}
	else if(childProcessID >0)
	{
		cout<<"Parent process ID : " << getpid()<<endl<<"Its Child Process ID : " <<childProcessID<<endl;
	}
	wait (NULL);
	return 0;
}

