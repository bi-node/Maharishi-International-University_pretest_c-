#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;

int decodeArray(int a[], int len)
{
    int zerocounter=0;
    int number=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]==0)
        {
            zerocounter++;
           
        }
       
        if(a[i]==1)
        {
            number=number*10+zerocounter;
            zerocounter=0;

        }

      
    }

    if(a[0]==-1)
        return -number;
    else
        return number;

}

int main()
{
    
    int a[]={0,1,1,1,1,1,0,1};
    int len = sizeof(a)/sizeof(a[0]);
    cout<<decodeArray(a,len);
    return 0;
}