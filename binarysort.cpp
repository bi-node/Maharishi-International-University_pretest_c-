#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a[]={2,1,4,2,-6,99,8,56,11};
    int len=sizeof(a)/sizeof(a[0]);
    int temp=0;
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(a[j+1]<a[j])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }

for(int k=0; k<len; k++)
{
    cout<<" "<<a[k];
}
    return 0;
}