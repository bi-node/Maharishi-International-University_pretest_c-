#include<iostream>
#include<stdlib.h>
using namespace std;
int* encodenumber(int n)
{
    int faccount=0;
    int fact;
    int temp=n;
    for(int i=2; i<n; i++)
    {
        while(temp%i==0)
        {
           
           faccount++;
            temp=temp/i;    
        }
    }
    int* arr=new int[faccount];
    temp=n;
    int index=0;
    for(int i=2; i<n; i++)
    {
        while(temp%i==0)
        {
            arr[index]=i;
            index++;
            temp=temp/i;    
        }
    }
    arr[faccount]=0;
    return arr;
    
}



int main()
{
    int n=6936;
    int* ptr;
    ptr=encodenumber(n);
    int i=0;
    while(ptr[i]!=0)
    {
        cout<<ptr[i]<<" ";
        i++;

    }
        
    

    
    return 0;
}