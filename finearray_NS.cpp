#include<iostream>
#include<stdlib.h>
using namespace std;
int isPrime(int a)
{
	   for (int i = 2; i < a; i++) 
       {
        if(a%i==0)
        {
			return 0;
		}
	}
	   return 1;
   }

int isFineArray(int a[], int len)
{
	   
	   for (int i = 0; i < len; i++) 
       {
		
		   for (int j = i; j < len; j++) 
           {
			   if(isPrime(a[i])==1 && isPrime(a[j])==1 && (a[i]-a[j]==2 || a[i]-a[j]==-2))
               {
				   return 1;
			   }
			  
		    }
	    }
	   return 0;
   }
   


int main()
{
    
    int a[]={4, 7, 9, 6, 5};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isFineArray(a,len);
    return 0;
}