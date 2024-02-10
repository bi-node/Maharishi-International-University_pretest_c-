#include<iostream>
#include<stdlib.h>
using namespace std;

int isVesuvian(int n)
{
    int sqi, sqj;
    int count=0;
    for(int i=1; i<n; i++)
    {
        for(int j=1;j<n; j++)
        {
            sqi=i*i;
            if(i!=j)
            {
                sqj=j*j;
            }
            if((sqi+sqj)==n)
            {
                count++;
            }
        }
    }
    if(count<2)
        return 0;
    else return 1;

}

int main()
{
    int n=50;
    for(int i=0;i<1000;i++)
    {
        if(isVesuvian(i))
            cout<<i<<" ";
    }
    //cout<<isVesuvian(n);
    return 0;
}