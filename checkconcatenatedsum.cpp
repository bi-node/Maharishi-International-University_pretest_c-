#include<iostream>
#include<stdlib.h>
using namespace std;
int checkConcatenatedsum(int n, int catlen)
{
    int i=n;
    int len=0;
    int multiplier;
    int thedigit;
    int dividor=10;
   
    int itemnumber=0;
    int sum=0;
    do
    {
        i=i/10;
        len++;            //length of number
    } while (i>0);
    
    
    for(int i=1; i<=len; i++)
    {
        thedigit=n%dividor;
        n=(int)n/10;
        itemnumber=0;
        //cout<<" "<<thedigit;
        multiplier=1;
        
        for(int j=0; j<catlen; j++)
        {
            itemnumber=itemnumber+thedigit*multiplier;
            multiplier=multiplier*10;
           

        }
         
        sum=sum+itemnumber;
        

    }

    return sum;

}

int main()
{
    system("cls");
    int a=13332;
    int b=4;
   int x= checkConcatenatedsum(a,b);
   if(a==x)
    cout<<1;
    else
    cout<<0;
    return 0;
}