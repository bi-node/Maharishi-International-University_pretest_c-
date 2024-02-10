#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    
    int a[]={2};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMartianArray(a,len);
    return 0;
}