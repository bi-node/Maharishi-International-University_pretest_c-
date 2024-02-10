#include<iostream>
#include<math.h>
using namespace std;

int isPerfectSquare(int n)
{
		int nextPerfectSquare = 0;
        if (n >= 0)
        {
            double sqrtResult = sqrt(n);
            int baseNumber = (int)sqrtResult;
            int nextNumber = baseNumber + 1;
            nextPerfectSquare = (int)pow(nextNumber,2);
        }
        return nextPerfectSquare;
}

int main()
{
    int a;
    a=100;
    cout<<"The perfect square next to given integer is"<<isPerfectSquare(a);
    return 0;
}