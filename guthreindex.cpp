#include<iostream>
#include<stdlib.h>
using namespace std;

int guthreIndex(int n)
{
    int count=0, i=n;
    if(n<1)
    {
        return 0;
    }
    else
    {
    while(i!=1)
    {
        if(i%2==0)
        {
            i=i/2;
            count++;
        }
        else
        {
            i=i*3 + 1;
            count++;
        }
    
    }
    return count;
    }
}


int main()
{
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The guthre index is: "<<guthreIndex(a);
    return 0;
}