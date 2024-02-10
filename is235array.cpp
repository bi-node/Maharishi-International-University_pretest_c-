#include<iostream>
#include<stdlib.h>
using namespace std;
int is235Array(int a[], int len)
{
    int div2=0, div3=0, div5=0, non235=0;
    int sum235;
       
    for(int i=0; i<len; i++)
    {
        if(a[i]%2==0)   div2++;
        else if(a[i]%5==0)   div5++;
        else if(a[i]%3==0)   div3++;
        else    non235++;
    }
    
   
    if(((div2+div3+div5)+non235)==(len))    return 1;
    else return 0;
}
    

int main()
{
    int a[]={2, 3, 5, 7, 11};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<is235Array(a,len);
    return 0;
}