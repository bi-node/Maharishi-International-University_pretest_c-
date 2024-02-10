#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;

int* fill(int a[], int len, int k, int n);


int main()
{
    int* ptr;
    int a[]={2,3,5,35,6,2,3,2};
    int k=3;
    int n1=9;
    int len=sizeof(a)/sizeof(a[0]);
    ptr= fill(a,len,k,n1);
    for(int i=0; i<n1; i++)
        cout<<" "<<*(ptr+i);
    
    return 0;
}

int* fill(int a[], int len, int k, int n)

{
    
  int* arr1 = new int[n];   //important
    int j=0;
    for(int i=0; i<n; i++)
    {
        arr1[i]=a[j];
        j++;
        if(j==k)
        {
            j=0;
        }
    }

    return arr1;

}