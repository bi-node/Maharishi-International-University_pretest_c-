#include<iostream>
#include<stdlib.h>
using namespace std;
int isMeera(int a[], int len)
{
    for(int i=0; i<len; i++)
    {
        if(a[i]>i)
        {
            return 0; 
            break;
        }

    }
    return 1;
}

int main()
{

    int a[]={-4, 2, 1, 0, 2, 1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMeera(a,len);
    return 0;
}