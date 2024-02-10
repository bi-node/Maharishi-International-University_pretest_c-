#include<iostream>
#include<stdlib.h>
using namespace std;

int isFactorialPrime(int n)
{
    int fact=1;
    int j=n;
    int formula;
    int isPrime=0;
    while(j>0)
    {
        for(int i=1; i<=n;i++)
        {
            for(int j=1; j<=i;j++)
            {
                fact=fact*j;
            }
            formula=fact+1;
            if(formula==n && formula>1)
            {
                isPrime=1;
                {
                    for(int dividor=2; dividor*2<=formula;dividor++)
                    {
                        if(formula%dividor==0)
                        {
                            isPrime=0;
                            break;
                        }
                    }
                    
                }
            }
        }
    }

}

int main()
{
    int a=5;
    cout<<isFactorialPrime(a);

    return 0;
}