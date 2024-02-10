#include<iostream>
#include<stdlib.h>
using namespace std;

char* name()
{
     char a[2];
     a[0]= {'b'};
    a[1]= {'i'};
    return a;
}

int main()
{
    char* ptr;
    ptr = name();
    for(int i=0; i<5; i++)
        cout<<ptr[0]<<" ";

    

    return 0;
}