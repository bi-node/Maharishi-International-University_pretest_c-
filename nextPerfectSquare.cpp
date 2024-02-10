#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;

int nextPerfectSquare(int n)
{
    double squareRoot, nextsquare;
    int  toInteger, nextnumber;

       
    if(n<1)
     return 4;
    else
    {    
    squareRoot= sqrt(n);
    toInteger = (int)squareRoot;
    nextnumber = toInteger + 1;
    nextsquare = pow(nextnumber,2);
    return nextsquare;
    }
}

int main()
{
    system("cls");
    int a;
    cout<<"Please enter a number: ";
    cin>>a;
    cout<<"The next perfect square to given number is: "<<nextPerfectSquare(a);
    return 0;
}