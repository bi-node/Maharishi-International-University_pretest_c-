#include<iostream>
using namespace std;
int primeCount(int start, int end){
		int primeCount = 0;
		for(int number = start; number <= end; number++){
			if(number > 1){	
				bool isPrime = true;
				for(int divider = 2; divider * 2 <= number; divider++){
					if(number % divider == 0){
						isPrime = false;
						break;
					}
				}
				if(isPrime){
					primeCount++;
				}
			}
		}
		return primeCount;
	}
int main()
{
    int s, e;
    s=0;
    e=100;
    cout<<"Total Prime numbers is "<<primeCount(s,e);
    return 0;
}