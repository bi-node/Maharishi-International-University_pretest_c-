#include<iostream>
#include<stdlib.h>
using namespace std;
int isCompleteArray(int a[], int len)
{
    int evencount=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]%2==0)
        {
            evencount++;
        }
    }
    int eveno[evencount];
    if(evencount<1) return 0;
    else
    {
        
        for(int j=0, k=0; j<len; j++)
        {
            if(a[j]%2==0)
            {
                eveno[k]=a[j];
                k++;
            }
        }
    }
    int min=eveno[0]; 
    int max=0;
    for(int l=0; l<evencount; l++)
    {
        if(eveno[l]>max)
        {
            max=eveno[l];
        }
        if(eveno[l]<min)
        {
            min=eveno[l];
        }
    }

   
int inbetween=0;
    if(min==max)        return 0;
    
    else
    {
        for(int m=min+1; m<max; m++)
        {
            int c=0;
            for(int n=0; n<len; n++)
                {
                    if(m==a[n])
                    {
                        c++ ;
                   }

                }
            if(c==0)        return 0;
        }
    }
    return 1;
}

int main()
{
    

    int a[]={2, 6, 5, 3, 4};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isCompleteArray(a,len);
    return 0;
}