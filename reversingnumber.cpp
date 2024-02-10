#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int a=15678;
    int i=a;
    
    int remainder;
    int reverse=0;

    while(i>0)
    {
        remainder=i%10;
        reverse=reverse*10+remainder;

        i=i/10;
        
    }
    cout<<reverse;
    
    return 0;
}