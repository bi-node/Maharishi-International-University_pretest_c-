//nUPcount Question no. 2
#include<iostream>
using namespace std;

int nUpCount(int a[], int len, int n)
{
int c=0;
int ps=0;
int temp[len];


for(int i=0;i<len;i++)
    {
       ps=ps+a[i];
       temp[i] = ps;
        if (temp[i] > n && temp[i-1]<=n )
          {
            c=c+1;
          }
          
    }   
return c;
}

int main()
{
    int len, n;
    n = 3;
    len = 7;
    int x[]={1,2,-1,5,-4,6,-3};
    cout<<nUpCount(x, len, n);
    return 0;
}