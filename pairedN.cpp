#include<iostream>
#include<stdlib.h>
using namespace std;
int isPairedN(int a[], int len, int n)
{
    int ispair=0;
    int sumInd;
    int sumVal;

if(n>len)
{
    return 0;
}
else
{
    for(int i=0; i<len; i++)
    {
        
        for(int j=0; j<len; j++)
        {
            sumInd=0;
            sumVal=0;
            if(i!=j)
            {
                sumInd=i+j;
                sumVal=a[i]+a[j];
                if(sumInd==sumVal&&sumVal==n)
                {
                    ispair=1;
                    break;
                }
            }
        }
    }
}
return ispair;

}

int main()
{
    int a[]={1, 0, 1};
    int len = sizeof(a)/sizeof(a[0]);
    int n=1;
    cout<<isPairedN(a,len,n);

    
    return 0;
}