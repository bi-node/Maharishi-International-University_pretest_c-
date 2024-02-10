#include<iostream>
#include<stdlib.h>
using namespace std;

int isDaphne(int a[], int len)
{
    if(a[0]%2==0)
    {
        for(int i=1; i<len; i++)
        {
            if(a[i]%2==1)
                return 0;
        }
    }
     if(a[0]%2==1)
    {
        for(int i=1; i<len; i++)
        {
            if(a[i]%2==0)
                return 0;
        }
    }

    return 1;

}

int main()
{
    
    int a[]={1, 3, 17, 5,9};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isDaphne(a,len);
    return 0;
}