#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;

bool isPerfectSquare(int n)
{
    double squareroot, sq;
    int temp;
    
    squareroot = sqrt(n);
    temp = (int)squareroot;
    sq = pow(temp,2);
    if(sq==n)
         return true;
   else
      return false;
    
}


int main()
{
    system("cls");
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(isPerfectSquare(a)==true)
    {
        cout<<"The number you have entered is perfect square"<<endl;
    }
    else
    cout<<"The number you have entered is not perfect square"<<endl;

    return 0;
    
    
}

