#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int isHoldernumber(int n)
{
    double number;
    for(int i=0; i<n; i++)
    {
        number=pow(2,i)-1;
        if(number==n)
        {
            break;
        }
        else if(number>n)
        {
            return 0;
            break;
        }
    }
    int no;
    no=(int)number;
bool isprime = true;
    if(no>1)
    {
    for(int j=2; j*2<=no; j++)
         {
            if(no%j==0)
            {
                return 0;
                break;
            }

         }
    }

    if(isprime)
    {
        return 1;
    }

}

int main()
{
    int n=31;
    cout<<isHoldernumber(n);
    return 0;
}