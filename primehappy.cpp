#include<iostream>
#include<stdlib.h>
using namespace std;

int isPrimeHappy(int n)
{
    int primesum=0;
    bool isPrime=false;
    int primeno;
    for(int i=0; i<n; i++)
    {
        if(i>1)
        {
            isPrime=true;
            for(int dividor=2; dividor*2<=i; dividor++)
            {
                if(i%dividor==0)
                {
                    isPrime=false;
                }
            }
        }
        if(isPrime) 
        {
          
           
           primesum=primesum+i;
        }
    }

if(primesum%n==0)
 return 1;
 else return 0;
    
}

int main()
{
    system("cls");
    int n=8;
    cout<<isPrimeHappy(n);

    return 0;
}