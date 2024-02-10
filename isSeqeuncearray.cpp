#include<iostream>
#include<stdlib.h>
using namespace std;

int issequenceArray(int a[], int len, int m, int n)
{
   int check=0;
   if(a[0]!=m || a[len-1]!=n)
   {
    check=0;
   }
   else
   {
    for(int i=0; i<len; i++)
    {
        if(a[i]<m || a[i]>n)
        {
            return 0;
            break;
        }
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
    int a[]={1,2,3,4,5,5} ;
    int len=4;
    int m=1;
    int n=6;
    cout<<issequenceArray(a,len,m,n);
    return 0;
}