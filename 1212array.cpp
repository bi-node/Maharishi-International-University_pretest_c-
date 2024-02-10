#include<iostream>
#include<stdlib.h>
using namespace std;

int array1212(int a[], int len)
{
    int is12array=1;
    for(int i=0; i<len-2; i++)
    {
        if(a[i]!=a[i+2])
        {
            is12array=0;
            break;

        }

    }
    return is12array;

}

int main()
{
    
    int a[]={1,2,1,2,1};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<array1212(a,len);
    return 0;
}