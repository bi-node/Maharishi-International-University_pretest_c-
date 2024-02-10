#include<iostream>
#include<stdlib.h>
using namespace std;
int isGuthresequence(int a[], int len)
{
    if(a[len-1]!=1) return 0;
    else{
        for(int i=0; i<len-1; i++)
         {
         if(a[i]%2==0)
            {
            if(a[i+1]!=a[i]/2)
            {
                return 0;
                break;
            }
            }
         if(a[i]%2==1)
            {
            if(a[i+1]!=a[i]*3+1)
            {
                return 0;
                break;
            }
            }
        }
    }
    
return 1;

}

int main()
{
    
    int a[]={7, 22, 11, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isGuthresequence(a,len);
    return 0;
}