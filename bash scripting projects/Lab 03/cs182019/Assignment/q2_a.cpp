#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>

using namespace std;

int main()
{
	if(fork()==0)
	{
		cout<<"1";
		cout << endl;
	}
	else
	{
		wait(0);
		cout <<"0";
		cout << endl;
		exit(0);
	}
	cout << "0";
	cout << endl;
	return 0;
}
