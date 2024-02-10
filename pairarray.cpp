#include<iostream>
#include<stdlib.h>
using namespace std;

bool isPair(int a[], int len)
{
    bool ispairs=true;
    int count;
    for(int i=0; i<len; i++)
    {
        count=1;
        for(int j=0; j<len; j++)
        {
        if(i!=j)
        {
            if(a[i]==a[j])
            {
               count++;
            }
        }
        }
        if(count%2!=0)
        {
            return false;
            break;
        }
    }

    return ispairs;
}

int main()
{
    int a[]={1,1,2,2,3,3};
    int len=sizeof(a)/sizeof(a[0]);
   cout<< isPair(a,len);

    return 0;
}