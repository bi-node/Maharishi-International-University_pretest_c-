#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int PerfectSQuareRange(int start, int end)
{
    double squareroot;
    int int_holder, nextperfectsquare;

    squareroot = sqrt(start);
    int_holder = (int)squareroot;
    if(int_holder*int_holder==start)
        for(int i= int_holder; i*i<=end;i++)
            cout<<i*i<<" ";
    else 
        for(int i=(int_holder+1);i*i<=end;i++)
            cout<<i*i<<" ";

}

int main()
{
    system("cls");
    int start=200;
    int end = 10000;
    PerfectSQuareRange(start,end);
    return 0;
}