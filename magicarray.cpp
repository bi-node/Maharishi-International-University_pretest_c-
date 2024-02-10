#include<iostream>
#include<stdlib.h>
using namespace std;

int isPrime(int x)
{
    if(x==1)    return 0;
    if(x>1)
    {
        for(int i=2; i*2<=x; i++ )
        {
            if(x%i==0)  return 0;
        }
    }
    return 1;
}

int isMagicarray(int a[], int len)
{
    int sum=0;
    for(int i=0; i<len; i++)
    {
        if(isPrime(a[i]))
            sum=sum+a[i];
    }

    if(a[0]==sum)
        return 1;
    else return 0;

}

int main()
{
    int a[]={0, 4,6};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMagicarray(a,len);
    return 0;
}