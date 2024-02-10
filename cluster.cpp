#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    
    int a[]={2,2,3,3,3,1,5};
    int len=sizeof(a)/sizeof(a[0]);
    int b[10];
    int cluster;
    
    for(int i=0; i<len; i++)
    {
        cluster=a[i];
        cout<<cluster;
        int j=0;
        while(a[i]==cluster)
        {
            i++;
        }
        i--;

    }
    return 0;
}