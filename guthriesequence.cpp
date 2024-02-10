#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    int a=7;
    int i;
    i=a;
    while( i!=1)
    {
        cout<<" "<<i;
        if(i%2==0)
        {
            i=i/2;
        }
        else
        {
            i=i*3+1;
        }
    } 
    
    return 0;
}