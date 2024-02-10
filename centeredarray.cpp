#include<iostream>
#include<stdlib.h>
using namespace std;

int isCentered(int a[], int len)
{
    int midindex;
    int iscenter=1;
    if(len%2==1)
    {
        midindex=(int)((len/2));
        for(int i=0; i<len; i++)
        {
            if(i!=midindex && a[i]<a[midindex] )
            {
             return 0;

            }
        }
    
    }
    else
    return 0;

    return 1;

}

int main()
{
    
    int a[]={10,1, 2};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isCentered(a,len);
    return 0;
}