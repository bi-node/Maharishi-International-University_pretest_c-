#include<iostream>
using namespace std;
   
void PrimeUpto(int a)
{
		for(int number = 0; number <= a; number++)
        {
			if(number > 1)
            {	
				bool isPrime = true;
				for(int divider = 2; divider * 2 <= number; divider++)
                {
					if(number % divider == 0)
                    {
						isPrime = false;
						break;
					}
				}
				if(isPrime){
					cout<<number<<endl;
				}
			}
		}
		
	}

int main()
{
    int a;
    cout<<"Enter a number ";
    cin>>a;
    PrimeUpto(a);
    return 0;
}