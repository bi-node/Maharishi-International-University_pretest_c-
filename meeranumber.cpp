#include<iostream>
#include<stdlib.h>
using namespace std;

int isMeeraNumber(int n)
{
    int ntcount=0;
    for(int i=2; i<n ; i++)
    {
        if(n%i==0)
        {
            ntcount++;
        }
    }

    for(int i=2; i<n ; i++)
    {
        if(n%i==0 && ntcount==i)
        {
            return 1;
        }
    }
return 0;


}

int main()
{
    
    int n=21;
    cout<<isMeeraNumber(n);
    return 0;
}