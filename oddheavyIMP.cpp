#include<iostream>
#include<stdlib.h>
using namespace std;

int isOddHeavy(int a[], int len)
{
    int oddcount=0;
    int oddno;
    int oddmin;
    int evenmax;
    for(int i=0; i<len; i++)
    {
        if(a[i]%2==1) 
        {
          oddcount++;
          oddmin=a[i];
        }
        else evenmax=a[i];

    }

    if(oddcount<1)  return 0;
    else
    {
        for(int j=0; j<len; j++) 
        {
            if(a[j]%2==1)
            {
                if(a[j]<oddmin)         oddmin=a[j];
            }
            else
            {
                if(a[j]>evenmax)        evenmax=a[j];
            }
        }  
    
    }

    if(oddmin>evenmax)  return 1;
    else return 0;


}

int main()
{
    
    int a[]={11, 4, 19, 2, 8, 10};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isOddHeavy(a,len);
    return 0;
}