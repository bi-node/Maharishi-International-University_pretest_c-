#include<iostream>
#include<stdlib.h>
using namespace std;

int LargestAdjectentSum(int a[], int len)
{
    int temp=0;
    int adjsum;
    for(int i=0; i<len-1; i++)
    {
        adjsum=a[i]+a[i+1];
        if(adjsum>temp)
        {
            temp=adjsum;
        }
    }

    return temp;


}

int main()
{
    
    int a[]={18, -12, 9, -10};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<LargestAdjectentSum(a,len);
    return 0;
}