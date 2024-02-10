#include<iostream>
#include<stdlib.h>
using namespace std;

int issequenceArray(int a[], int len, int m, int n)
{
   int check=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]<m || a[i]>n)
        {
            return 0;
            break;
        }
    }

    for(int i=0; i<len-1; i++)
    {
        if((a[i]==a[i+1]) || a[i]+1==a[i+1])
        {
            check=1;
        }
        else
        {
            check=0;
            return check;
            break;
        }
    }
    return check;
}

int main()
{
    int a[]={1,2,3,4} ;
    int len=4;
    int m=1;
    int n=5;
    cout<<issequenceArray(a,len,m,n);
    return 0;
}