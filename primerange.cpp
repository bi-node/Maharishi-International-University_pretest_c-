#include<iostream>
using namespace std;

void primerange(int start, int end)
{
    bool prime_check=true;
    int number=0;
    for(number=start; number<=end; number++)
    {
        if(number>1)
            {
                prime_check=true;
                for(int divisor=2;divisor*2<=number; divisor++)
                {
                    if(number%divisor==0)
                    {
                        prime_check=false;
                        break;
                    }
                }
                if(prime_check)
                {
                    cout<<number<<" ";
                }
            }
    }
}

int main()
{
    int s, e;
    cout<<"Enter the starting no ";
    cin>>s;
    cout<<endl<<"Enter the ending no";
    cin>>e;
    primerange(s,e);
    return 0;
}