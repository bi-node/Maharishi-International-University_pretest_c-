#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int isDigitIncreasing(int n)
{
    int no_temp=n;
    int len=0;
    int isdigit=0;
    while(no_temp>0)
    {
        no_temp=no_temp/10;
        len++;
    }
    int number=0;
    
    for(int i=1; i<10; i++)
    {
        int sum=0;
        number=0;
        for(int j=1; j<=len; j++)
        {
            number=number*10+i;
            sum=sum+number;
        }
        
        if(sum==n)
        {
           isdigit=1; 
           return isdigit;
           break;
        }
    }
return isdigit;
}

int main()
{
        int n=7404;
        system("cls");
      //cout<< isDigitIncreasing(n);
      for(int i=0; i<100000; i++)
      {
        if(isDigitIncreasing(i))
            cout<<i<<" ";
      }

    return 0;
}