#include<iostream>
#include<stdlib.h>
using namespace std;
int* fillarray(int a[], int len, int k, int n)
{

    int* arr = new int[n];
    int j=0;
    for(int i=0 ; i<n ; i++)
    {
        arr[i]= a[j];
        j++;
        if(j==3) j=0;
    }

    return arr;


}

int main()
{
    
    int a[]={1,2,3,5, 9, 12,2,1};
    int k=3;
    int n=10;
    int len=sizeof(a)/sizeof(a[0]);
    int* ptr;
    ptr=fillarray(a,len,k,n);

    for(int i=0; i<n; i++)
    {
        cout<<*(ptr+i)<<" ";
    }
    return 0;
}