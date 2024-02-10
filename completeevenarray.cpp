#include<iostream>
#include<stdlib.h>
using namespace std;

int isInBetween(int a[], int len, int x)
{
    int flag=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]==x)
        {
            flag=1;
        }
    }
    return flag;
}

int isComplete(int a[], int len)
{
    for(int i=0; i<len; i++)
    {
        if(a[i]<1)  return 0;
    }

    int higheve=0;
    for(int j=0; j<len; j++)
    {
        if(a[j]%2==0)
        {
            if(a[j]>0)
            {
                higheve=a[j];
            }

        }
    }

    for(int i=2; i<higheve; i+=2)
    {
        if(!isInBetween(a,len,i))
            return 0;
    }

return 1;

}

int main()
{
    
    int a[]={2, 3,4, 3, 6};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isComplete(a,len);
    return 0;
}