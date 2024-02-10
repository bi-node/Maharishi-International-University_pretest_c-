#include<iostream>
#include<stdlib.h>
using namespace std;

int minDistance(int n)
{
    int len=0;
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)  len++;
    }

    int factors[len];
    int k=0;
    for(int j=1; j<=n; j++)
    {
        if(n%j==0)
        {
            factors[k]=j;
            k++;
        }
    }


// minimum distance calculation
int diff;
int mindiff=factors[len-1];

for(int i=0;i<len-1;i++)
{
    for(int j=i+1; j<len;j++)
    {
        diff=-(factors[i]-factors[j]);
        
        if(diff<mindiff)
        {
            mindiff=diff;
        }

    }
}

return mindiff;


}

int main()
{
    int n=13;
    cout<<minDistance(n);
    return 0;
}