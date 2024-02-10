#include<iostream>
#include<math.h>
using namespace std;

bool isPerfectSquare(int number)
{
    bool isps;
    if(number>1)
    {
        for(int i=0; i<=number;i++)
        {
            double sqrt1 = sqrt(number);
            int integ = sqrt1;
            if(sqrt1 == integ)
            {
                isps=true;
            }
        }
        isps=false;
    }
}

int main()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    if(isPerfectSquare(a))
    {
        cout<<"It is perfect square";
    }
    else
    {
        cout<<"It is not perfect square";
    }

    return 0;
}