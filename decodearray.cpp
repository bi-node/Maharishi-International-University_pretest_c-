#include<iostream>
#include<stdlib.h>
using namespace std;

int decodeArray(int a[], int len)
{
    int digit=0;
    int mul=1;
    int number=0;
    for(int i=len-1; i>0; i--)
    {
        digit=abs(a[i-1]-a[i]);
        number=number+digit*mul;
        mul=mul*10;
        
    }

    return number;
    

   

}

int main()
{
    int a[]={0,-3,0,-4,0};
    int len=5;
   cout<< decodeArray(a,len);
    return 0;
}