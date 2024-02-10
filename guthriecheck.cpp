#include<iostream>
#include<stdlib.h>
using namespace std;
bool isGuthrie(int a[], int n)
{
  bool guthre=false;
  int temp=0;
  if(a[0]<1 || a[n]!=1)
    {
      guthre = false;
    }
  else{
      for(int i=0;i<n;i++)
      {
        if(a[i]%2==1)
        {
           temp=a[i]*3 +1;
           if(a[(i+1)]==temp)
           {
            guthre=true;
            } 
            else{
              guthre=false;
              break;
            }
        }
        else if(a[i]%2==0)
        {
          temp= (a[i]/2);
          if(a[(i+1)]==temp)
          {
            guthre=true;
           }
           else
           {
            guthre=false;
            break;
           }
        }
      }

      }  
    return guthre;
}

int main()
{
  system("cls");
  int a[]={8, 4, 2};
  int n=2;
  if(isGuthrie(a,n))
  cout<<"Guthre"<<endl;
  else
  cout<<"not guthre"<<endl;
  return 0;
}