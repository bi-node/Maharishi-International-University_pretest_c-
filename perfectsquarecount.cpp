#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int squarecount(int start, int end)
{
    double squareroot;
    int toInt;
    int count=0;

    squareroot = sqrt(start);
    toInt = (int)squareroot;
    if(toInt*toInt ==start)
        for(int i=start; i*i<=end; i++)
            count++;
    else
        for(int i= (toInt+1);i*i<=end;i++)
            count++;
    
    return count;

}

int main()
{
    
    int start=1;
    int end =1000;
    cout<<"The perfect square in this range is :"<<squarecount(start,end);
    return 0;
}