#include<iostream>
#include<stdlib.h>
using namespace std;

int isPrime(int no)
{
    int isPrime=0;
    if(no>1)
    {
        isPrime=1;
        for(int dividor=2; dividor*2<=no; dividor++)
        {
            if(no%dividor==0)
            {
                isPrime=0;
                break;
            }

        }
    }
return isPrime;

}
int isNprimable(int a[],int len, int n)
{
    int primab=1;
   
    for(int i=0; i<len; i++)
    {
        if(!(isPrime(a[i]+n)))
        {
            primab = 0;
            break;
        }

    }

return primab;



}



int main()
{
    int a[]={5,15,26};
    int len=sizeof(a)/sizeof(a[0]);
    int n=2;
    cout<<isNprimable(a,len,n);
    return 0;
}