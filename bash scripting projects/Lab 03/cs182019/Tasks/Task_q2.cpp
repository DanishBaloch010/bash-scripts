#include <iostream>
#include <unistd.h>

using namespace std;
int main()
{  
    int key = 99; 
    int pid = fork(); 
    
    if (pid != 0) 
    { 
        cout << "This is Parent Process."<<endl; 
  
        int array[5] = { 1, 6, 10, 45, 67 }; 
        int size = 5; 
        int check; 
        for (int i = 0; i < size; i++) 
        { 
            if (array[i] != key) 
            { 
                check = 0; 
            } 
            else 
            { 
                check = 1;
                break; 
            } 
        } 
        if (check == 1)
        { 
            cout << "Key is Present in Array."<<endl; 
        } 
        else if(check == 0)
        {   
            cout << "Key is not Present in Array."<<endl; 
        } 
    } 
     
    else if (pid == 0)
    { 
        cout << "This is Child Process."<<endl; 
        cout << "Numbers to be searched is : " << key; 
    } 
  
    return 0; 
}
