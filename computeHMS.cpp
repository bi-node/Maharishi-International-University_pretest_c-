#include<iostream>
#include<stdlib.h>
using namespace std;

int* compHMS(int sec)
{
    static int a[2];
   int dividor=3600;
    //a[0]=(int)sec/3600;
    //min= sec%3600;
    //a[1]= (int)min/60;
    //sec1=min%60;
   // a[2]=sec1;

   for(int i=0; i<3; i++)
   {
    a[i]=(int)sec/dividor;
    sec=sec%dividor;
    dividor=dividor/60;


   }
    return a;
}

int main()
{
    int* pt;
    int seconds=3735;
    pt= compHMS(seconds);
    for(int i=0; i<3; i++)
    {
        cout<<pt[i]<<" ";
    }
    

    return 0;
}