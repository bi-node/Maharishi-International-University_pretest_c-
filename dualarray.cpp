#include<iostream>
#include<stdlib.h>
using namespace std;

int isDualArray(int a[], int len)
{
    
    for(int i=0; i< len; i++)
    {
        int count=1;
        for(int j=0; j< len; j++)
        {
            if(i!=j)
            {
            if(a[i]==a[j])
            {
                count++;
            }
            }

        }
        if(count!=2)    return 0;
    }
return 1;
}

int main()
{
    
    int a[]={1, 2, 1, 3, 3, 2,8,8};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isDualArray(a,len);
    return 0;
}