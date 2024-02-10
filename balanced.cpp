#include<iostream>
#include<stdlib.h>
using namespace std;

int isbalanced(int a[], int len)
{
    
    int j=0;
    for(int i=1; i<len; i=i+2)
    {
        if(a[i]%2!=1 || a[j]%2!=0)
            return 0;
        j=j+2;
    }
return 1;

}

int main()
{
    
    int a[]={6, 4, 2, 3, 12, 79, 90, 67};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isbalanced(a,len);
    return 0;
}