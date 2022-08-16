#include <iostream>
#include <unistd.h>

using namespace std;
int main()
{  
    
    int size = 5;  
    int value =0;
    int array[5] = { 5, 88, 34, 12, 1 };
    int pid = fork(); 
        
    if (pid != 0) 
    { 
        cout << "This is Parent Process."<<endl; 
        
        for (int i = 0; i<size; i++) 
        { 
           for(int j = i+1; j<size; j++)
           {
           	if(array[j] < array[i])
           	{
           		value = array[i];
           		array[i]=array[j];
           		array[j]=value;
           	}
           } 
        } 
        
        cout <<"Sorted Array is : ";
        for(int a=0; a<size; a++)
        {
        	cout << array[a] << " ";
        }
	cout << endl;
    } 
     
    else if(pid == 0)
    { 
    	cout << endl;
        cout << "This is Child Process."<<endl; 
        cout << "Numbers to be Sort are : "; 
        
        for(int a=0;a<size;a++)
        {
        	cout<<array[a] << " ";
        } 
    } 
  
    return 0; 
}
