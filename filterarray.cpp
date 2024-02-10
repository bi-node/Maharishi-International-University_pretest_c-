#include<iostream>
#include<stdlib.h>
using namespace std;
int filterarray(int a[], int len, int n)
{
int temp[10];
int b[10];
int i=0;
while(n!=0)
{
    temp[i]=n%2;
    i++;
    n=n/2;
}
    int k=0;
    if(i<=len)
    {
        for(int j=0; j<i;j++)
        {
            if(temp[j]==1)
            {
                b[k]=a[j];
                k++;
            }
        }
    }
    else cout<<"null";

    for(int i=0; i<k;i++)
      cout<<" "<<b[i];


}

int main()
{
    int a[]={0,9,12,18,-6};
    int len = 5, n=11;
    filterarray(a,len,n);
    return 0;
}