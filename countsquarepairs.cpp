#include<iostream>
#include<stdlib.h>
#include<math.h>
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
  int  n=3;
  int a[]= {11,4,5,20};
 
  system("cls");
  
    for(int i=0;i<=n;i++)
    {
         for(int j=0;j<=n;j++)
         {
          //if(i!=j)
          //{
            if((a[i]>0 && a[j]>0) && (a[i]<a[j]) && (isPerfectSquare(a[i]+a[j])))
             
                cout<<a[i]<<","<<a[j]<<endl;
             
          //}
          
          }

         }
       
  return 0;
}