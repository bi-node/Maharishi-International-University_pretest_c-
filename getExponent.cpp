#include<iostream>
#include<stdlib.h>
using namespace std;
int getExponential(int n, int p)
{
    int counter=0;

    if(p<=1)
    {
        return -1;
    }
    
    else if(n%p==0)
    {
        for(int i=n; i%p==0;i=i/p)
        {
            counter++;
            //cout<<" "<<counter;
        }
        return counter;
    }

    else
    return 0;

   
}
int main()
{
    system("cls");
    int a=-128;
    int b=4;
    cout<<getExponential(a,b);
           
    return 0;
}