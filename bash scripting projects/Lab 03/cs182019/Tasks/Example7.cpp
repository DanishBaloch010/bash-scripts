#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define count 5
using namespace std;

int main()
{
	int i , pid;
	pid = getpid();
	cout<<"Before fork, pid is " << pid << endl;
	pid=fork();
	cout<<"After fork, pid is " << pid <<endl;
	if(pid == 0)
	{
		cout<<"Child process Starts : " << endl;
		for(int i=0; i<3; ++i)
		{
			cout<<"i is " << i << endl;
		}
		cout<< "Child process end :"<< endl;
	}
	else
	{
		cout<<"Wait Starts :"<< endl;
		cout <<"Process ID :" << getpid()<<endl;
		pid = wait(0);
		cout<< "* Pid :"<<pid << endl;
		cout <<"* After wait :"<<endl;
		cout<< "* Parent ID :"<< getppid() << endl;
	}
	return 0;
}
