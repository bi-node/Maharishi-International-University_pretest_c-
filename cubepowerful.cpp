#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int isCubePowerful(int n)
{
    int i=n;
    double sum=0;
    int item;
    double a;
    while(i>0)
    {
        item=i%10;
        a=item;
        sum=sum+pow(a,3);
        i=i/10;
    }
  
if(sum==n && n>0)
return 1;
else return 0;


}

int main()
{
    int a;
    a=153;
    cout<<" "<<isCubePowerful(a);
    return 0;
}