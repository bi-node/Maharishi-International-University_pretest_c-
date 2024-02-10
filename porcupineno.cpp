#include<iostream>
#include<stdlib.h>
using namespace std;

int isPrime(int n)
{
  int primecheck;
  if(n>1)
  {
  for(int dividor=2; dividor*2<n; dividor++)
  {
    if(n%dividor==0)
      {
        primecheck=0;
        break;
      }
  }
  primecheck=1;
  }
}

int nextPrime(int x)
{
    int i;
    i=x;
    do
  {
   i=i+1;
  } while (isPrime(i)==0);
return i;
}

int isPorcupine(int y)
{
    int j;
    j=y;
    if(isPrime(j)==0)
        return 0;
    else if(j%10==9 && nextPrime(j)%10==9)
            return 1;
        else
           return 0;
    
}


int main()
{
 for(int i=0;i<1000;i++)
 {
    if(isPorcupine(i)==1)
      cout<<i<<" ";
 }
 
 return 0;
  
}