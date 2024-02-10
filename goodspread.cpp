#include<iostream>
#include<stdlib.h>
using namespace std;
int isGoodspread(int a[], int len)
{
    int nocount;
    for(int i=0; i<len; i++)
    {
        nocount=0;
        for(int j=0; j<len; j++)
        {
            if(a[i]==a[j])
            {
                nocount++;
            }
        }
        if(nocount>3)
        {
            return 0; 
            break;
        }
    }
    return 1;
}

int main()
{
    
    int a[]={3, 1, 3 ,1, 3, 5, 5, 3};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isGoodspread(a,len);
    return 0;
}