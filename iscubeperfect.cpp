#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

bool isPerfectCube(int x)
{
    int cuberoot;
    int cube;
    cuberoot=cbrt(x);
    cube=(int)pow(cuberoot,3);
    if(cube==x)
        return true;
    else
        return false;
}

int isCubePerfect(int a[], int len)
{
    for(int i=0; i<len; i++)
    {
        if(!isPerfectCube(a[i]))
            return 0;
    }
    return 1;

}

int main()
{
    
    int a[]={1,8,1,27, -1, 64, 63};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isCubePerfect(a,len);
    return 0;
}