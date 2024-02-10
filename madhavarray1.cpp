#include<iostream>
#include<stdlib.h>
using namespace std;

int isMadhavarray(int a[], int len)
{
    int isMadhav=0;
    int i=0;
    int temp;
    while(i<=len)
    {
        temp=i*(i+1)/2;
        if(temp==len)
        {
            isMadhav=1;
            break;
        }
         i++;
    }
   if(isMadhav==0)  return 0;
   else
   {    int x=0;
        int sum;
        for(int i=0; x<len; i++)
        {   sum=0;
            for(int j=0; j<=i; j++)
            {
                sum=sum+a[x];
                x++;
            }
            if(sum!=a[0])   return 0;

        }
   }
   return 1;
}

int main()
{
    
    int a[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1,
1, -2, -1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMadhavarray(a,len);
    return 0;
}