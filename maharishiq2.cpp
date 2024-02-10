#include<iostream>
#include<stdlib.h>
using namespace std;
int answerTwo(int a[], int len)
{
     int isodd=0;
    if((a[0]%2==0 && a[len-1]%2==1)||(a[0]%2==1 && a[len-1]%2==0))
    {return 0;}
    
   
    if(a[0]%2==1)
    {isodd=1;}
    for(int i=0; i<len; i++)
    {
        if(i==0&&isodd==1)
        {
            if(a[i+1]%2==1)
            {return 0;}
        }
        else if(i==len-1 && isodd==1)
        {
            if(a[i-1]%2==1)
            {return 0;}
        }
        else if(a[i]%2==1)
        {
            if(a[i+1]%2==1 || a[i-1]%2==1)
            {return 0;}
        }

    }

    return 1;
    

}

int main()
{
    
    int a[]={4,5,4,5,3,9,10};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<answerTwo(a,len);
    return 0;
}