#include<iostream>
#include<stdlib.h>
using namespace std;

int countones(int n)
{
   int remain;
   int counter=0;
    while(n>0)
    {
        remain=n%2;
        if(remain==1)
            counter++;
        n=(int)n/2;
    }
return counter;
}

int main()
{
    
    int n=134235;
    cout<<countones(n);
    return 0;
}