#include<iostream>
#include<stdlib.h>
using namespace std;
int isConsecutiveFactored(int n)
{
  if(n<2)       return 0;
  int len=0;
  for(int i=2; i<n; i++)
  {
    if(n%i==0)      len++;
  }
    int arr[len];
    for(int j=2, k=0; j<n; j++)
        {
            if(n%j==0)
            {
                arr[k]=j;
                k++;
            }
        }

    for(int l=0; l<len-1; l++)
    {
      
     if(arr[l]==arr[l+1]-1)
     {
        return 1;
        break;
     }

    }
    return 0;

}

int main()
{
    
    int n=60;
    cout<<isConsecutiveFactored(n);
    return 0;
}