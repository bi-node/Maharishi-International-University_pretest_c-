#include<iostream>
#include<stdlib.h>
using namespace std;

int isOnionArray(int a[], int len)
{
    int j;
    int sum;
    for(int i=0; i<len; i++)
    {
        j=(len-1)-i;
        if(i==j) continue;
        else
        {
            sum=a[i]+a[j];
            if(sum>10)
            {
                return 0;
                break;
               
            }

        }
    }
     return 1;
}

int main()
{
    system("cls");
    int a[]={};
    int len= sizeof(a)/sizeof(a[0]);
    cout<<isOnionArray(a,len);

    return 0;
}