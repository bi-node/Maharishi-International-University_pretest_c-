#include<iostream>
#include<stdlib.h>
using namespace std;
int isBeanArray(int a[], int len)
{
    int isbean=1;
    int count=0;
    for(int i=0; i<len; i++)
    {
        count=0;
        for(int j=0; j<len; j++)
        {
           if(i!=j)
           {
            if(a[i]==a[j]+1 || a[i]==a[j]-1)
            {
                count ++;
            }
           }
        }
         if(count<1) 
            {
            isbean=0;
            break;
             }
        
    }
return isbean;
}

int main()
{
    int a[]={3, 4, 5, 7};
    int len;
    len= sizeof(a)/sizeof(a[0]);
    cout<<isBeanArray(a,len);
    return 0;
}