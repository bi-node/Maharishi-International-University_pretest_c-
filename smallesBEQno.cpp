#include<iostream>
#include<stdlib.h>
using namespace std;
bool isBEQ(int n)
{
   int len=0;
   int no=n;
    while(no>0)
    {
        no=no/10;
        len++;
    }
    int remain;
    int counter=0;
    for(int i=1; i<=len; i++)
    {
        remain=n%10;
        if(remain==6)
        {
            counter++;
        }
        n=n/10;
    }
    if(counter==4)
        return true;
        else
        return false;
}
int smallerstBEQ()
{
    double cub;
    for(int i=717; i<1000; i++)
    {
        cub=i*i*i;
        if(isBEQ(cub))
        {
            return i;
            break;
        }

    }
}



int main()
{
    
    cout<<smallerstBEQ();
    return 0;
}