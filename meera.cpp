#include<iostream>
#include<stdlib.h>
using namespace std;
bool isPrime(int x)
{
    bool flag=false;
    if(x>1)
    {
        flag=true;
        for(int dividor=2; dividor*2<=x; dividor++)
        {
            if(x%dividor==0)
            {
                flag=false;
                break;
            }
        }
       return flag;
    }
}

int isMeeraarray(int a[], int len)
{
   int countzero=0;
    int coutnprime=0;
    for(int i=0; i<len; i++)
    {
        if(a[i]==0)
        {
            countzero++;
        }
        if(isPrime(a[i]))
        {
            coutnprime++;
        }
    }

    if((countzero==0 && coutnprime==0)||(countzero!=0 && coutnprime!=0))
        return 1;
    else return 0;
}

int main()
{
    
    system("cls");
    int a[]={7, 6, 0, 10, 1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMeeraarray(a,len);
    return 0;
}