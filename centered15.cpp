#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;
int centered15(int a[], int len)
{
    int isCentered=0;
    int sum=0;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            sum=sum+a[j];
            if(sum==15 && i==(len-j-1))
            {
                return isCentered=1;
                break;
            }
        }
        sum=0;
    }
    return isCentered;
}

int main()
{
    int a[]={3,2,10,3,1,1,6};
    int len;
    len= sizeof(a)/sizeof(a[0]);
    cout<<centered15(a,len);
    return 0;
}