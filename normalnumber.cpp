#include<iostream>
#include<stdlib.h>
using namespace std;
int isNormalnumber(int n)
{
    if(n==0 )    return 0;
    if(n==1)    return 1;
    
    for(int i=2; i<n; i++)
    {
        if(n%i==0 && i%2==1)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    for(int i=0; i<1000; i++)
    {
        if(isNormalnumber(i))
            cout<<" "<<i;

    }

    
    return 0;
}