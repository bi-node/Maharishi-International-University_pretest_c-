#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int isPrime(int x)
{
    int isPrime=0;
    if(x>1)
    {
        isPrime=1;
        for(int dividor=2; dividor*2<=x; dividor++)
        {
            if(x%dividor==0)
            {
                isPrime=0;
                return 0;
                break;
            }
        }

    }
    return isPrime;

}

int isHolder(int n)
{
    int fact;
    int holder;
    int isholder=0;
    if(isPrime(n)==1)
    {
        for(int j=1; j<n; j++)
        {
            holder=(int)(pow(2,j))-1;
            if(n==holder)
            {
                isholder=1;
                return isholder;
                break;
            }
        }
        
    }
    else return 0;


}



int main()
{
    
    int n=31;
    cout<<isHolder(n);
    return 0;
}