#include<iostream>
#include<stdlib.h>
using namespace std;

int isclosestfibonacci(int n)
{
    int n1=0, n2=1, n3=0;
    
    for(int i=0; n3<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;

    }
    
    
    
    return n1;          //should return the first number 
}

int main()
{
    int n=10;
    system("cls");
    cout<<isclosestfibonacci(n);
    return 0;
}