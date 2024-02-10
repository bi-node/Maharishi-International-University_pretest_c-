#include<iostream>
#include<stdlib.h>
#include<array>
using namespace std;

int main()
{
	
	int n=-125321;
	int temp_no=abs(n);
	int digit;
	int no_digit=0;
	int sum=0;
	int len;
	while(temp_no>0)
	{
		digit=temp_no%10;
		temp_no=temp_no/10;
		no_digit++;
		sum=sum+digit;
	}
	if(n<0)
	{
		len=sum+ no_digit +1;
  
		
	}
	else len=sum+no_digit;
	

	
int a[len];
int digit1;
int temp_no1=abs(n);
	for(int i=len-1; i>=0; i--)
	{
		digit1=temp_no1%10;
		temp_no1=temp_no1/10;
		a[i]=1;
		for(int j=0; j<digit1; j++)
		{
			a[i-1]=0;
			i--;
		}
	}

  if(n<0) a[0]=-1;
	
for(int k=0; k<len; k++)
{
	cout<<" "<<a[k];
}


	return 0;
}