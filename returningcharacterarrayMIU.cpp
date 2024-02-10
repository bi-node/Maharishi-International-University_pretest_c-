#include<iostream>
#include<stdlib.h>
using namespace std;

char* f(char a[], int start, int length, int len)
{
    if (length < 0 || start < 0 || start+length-1>= len)
        {
            return NULL;
         }
    char* sub = new char[length];
        for (int i=start, j=0; j<length; i++, j++)
        {
            sub[j] = a[i];
        }
return sub;


}

int main()
{
    
    char* ptr;
    char a[]= {'a', 'b', 'c', 'd', 'e'};
    int len=sizeof(a)/sizeof(a[0]);
    int length =4;
    int start=2;
    ptr=f(a,start,length,len);
    for(int i=0; i<length; i++)
    {
        cout<<ptr[i];
    }
   
    return 0;
}