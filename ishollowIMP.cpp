#include<iostream>
#include<stdlib.h>
using namespace std;
int isHollow(int a[], int len)
{
   if(len%3!=0) return 0;

    for (int i=0;i<=len/3-1; i++)
    {
        if (a[i]==0)       return 0;
    }
                
    for (int j= len/3;j<=(len*2/3)-1;j++)
    {
        if (a[j] != 0)      return 0;
    }

    for (int k= (len*2/3); k<len; k++)
    {
        if (a[k] == 0)      return 0;
    }

    return 1;
   


}

int main()
{
    
    int a[]={1,2,3,5,0,0,1,0,3,4,5,1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isHollow(a,len);
    return 0;
}