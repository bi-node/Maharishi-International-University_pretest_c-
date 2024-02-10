#include<iostream>
#include<stdlib.h>
using namespace std;

int largestDiffenceofEven(int a[], int len)
{
    int eno=0;
      int temp=0;
    for(int i=0;i<len;i++)          ///for counting even elements;
    {
      if(a[i]%2==0)
        {
            eno++;
        }
    }
    int even[eno];
    int en=0;
    for(int l=0;l<len;l++)          ///for counting even elements;
    {
      if(a[l]%2==0)
        {
            even[en]=a[l];
            en++;
        }
    }


    if(en<2)
    {
       return -1;
    }
    else
  
    {
        for( int j=0; j<en; j++)
        {
            for(int k=0; k<=j; k++)
            {
                if(even[k]>even[k+1])
                {
                    temp = even[k];
                    even[k]=even[k+1];
                    even[k+1]= temp;
                }

            }

        }

    }
   
   return(even[en]-even[0]);


}


int main()
{
    int a[]={88,1,4,3,5};
    int len=sizeof(a)/sizeof(a[0]);
   cout<<largestDiffenceofEven(a,len);

    return 0;
}