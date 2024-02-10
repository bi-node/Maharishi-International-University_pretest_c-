#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;
int isMadhavArray(int a[], int n);
int main()
{
    int n=2;
    int a[n]={2, 1, 1} ;
    if(isMadhavArray(a,n))
        cout<<"1";
    else
        cout<<"0";
     return 0;
}

int isMadhavArray(int a[], int n)
{
//check if validates n*(n+1)/2
int ismadhav=0;
int k = 1;
while (k < n)
{
    int temp = k * (k + 1) / 2;
    if ( temp == n)
        {
            ismadhav = 1;
            break;
        }
    k++;
}
//
if (ismadhav == 0)
return 0;
//
int loop = 1;
int i = 0;
while (i < n)
{
    int inloop = loop;
    int temp = 0;
    while (inloop > 0)
    {
        temp += a[i++];
        inloop--;
    }

    if (temp != a[0])
    return 0;
    loop++;
}
return 1;
}