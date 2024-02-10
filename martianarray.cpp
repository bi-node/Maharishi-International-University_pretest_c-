#include<iostream>
#include<stdlib.h>
using namespace std;

int isMartianArray(int a[], int len)
{
    int ones=0, twos=0;
    int ismart=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]==1)
        {
            ones++;
        }
        if(a[i]==2)
        {
            twos++;
        }
       
    }

   

    if(ones>twos)
    {
        ismart=1;
        for(int j=0; j<len-1; j++)
        {
            if(a[j]==a[j+1])
            {
                ismart=0;
                break;
            }
            
        }
       
    }

    return ismart;

}

int main()
{
    int a[]={2};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMartianArray(a,len);
    return 0;
}