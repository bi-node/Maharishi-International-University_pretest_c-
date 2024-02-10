#include<iostream>
#include<stdlib.h>
#include<array>

using namespace std;
int zeroPlentiful(int a[], int len)
{
    int dcounter=0;
    int counter;
    for(int i=0; i<len-3; i++)
    {
        counter=0;
        if(a[i]!=0) continue;
        else if(a[i]==0)
        {
            while(a[i]==0)
            {
            counter++;
            i++;
            }
        }
        if(counter>=4) 
        {
            dcounter++;
            
        }
    }
    return dcounter;
}

int main()
{
    system("cls");
    int a[]={0,0,0,0,0,1,0,0,1,2,0,0,0,0,2,0,0,0,0,0,0,1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<zeroPlentiful(a,len);
    
    return 0;
}