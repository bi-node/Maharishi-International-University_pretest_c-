#include<iostream>
using namespace std;

bool isPrime(int number)

{
    bool prime_check;
    if(number > 1)
    {
    prime_check = true;
    for(int divisor=2; divisor*2 <= number; divisor++)
        {
            if(number % divisor ==0)
            {
                prime_check = false;
                break;
            }
         }
    return prime_check;
    }
}

int main()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    (isPrime(a)) ? cout<<"Prime" : cout<<"Not Prime";
    return 0; 
}