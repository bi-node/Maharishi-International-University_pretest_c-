#include<iostream>
#include<stdlib.h>
using namespace std;
int isDaphne(int a[], int len)
{
    int oddcount=0;
    int isdpahne=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]%2==1)
            oddcount++;
    }

    if(oddcount<1)
    {
        return 0;
    }
    else
    {
        for(int j=0; j<len; j++)
        {
            if((a[j]%2==0 && a[len-1-j]%2==0)||(a[j]%2==1 && a[len-1-j]%2==1))
            {
                isdpahne=1;
            }
            else
            {
                isdpahne=0;
                break;
            }
        }

    }
    return isdpahne;
}

int main()
{
    
    int a[]={4, 0, 2, 8, 7, 9, 10, 4,6, 8};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isDaphne(a,len);
    return 0;
}