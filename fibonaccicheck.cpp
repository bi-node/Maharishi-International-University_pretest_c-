#include<iostream>
#include<stdlib.h>
using namespace std;
int fibonaccicheck(int n)
{
    bool flag=false;
    if(n==1 )
    {
        return 1;
    }
    int t1=1;
    int t2=1;
    int t3;
    
    {
        for(int i=1;i<n;i++)
        {
            t3=t1+t2;
            if(t3==n)
            {
                flag=true;
                break;
            }
            t1=t2;
            t2=t3;
        }
    }

    if(flag)    return 1;
    else return 0;


}

int main()
{
    

    int n=21;
    cout<<fibonaccicheck(n);
    return 0;
}