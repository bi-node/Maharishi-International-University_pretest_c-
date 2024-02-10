#include<iostream>
#include<stdlib.h>
using namespace std;

char* arr()
{
    static char a[]={'b', 'i', 'n', 'o', 'd'};
    int len=sizeof(a)/sizeof(a[0]);
    return a;

}

int main()
{
    
    char* ptr;
    ptr = arr();
    for(int i=0; i<5; i++)
        cout<<ptr[i];
    return 0;
}