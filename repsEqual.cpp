#include<iostream>
#include<stdlib.h>
using namespace std;
int repsEqual(int a[], int len, int n)
{
   int index=0;
   int multiple=1;
    for(int i= len-1; i>=0; i--)
    {
        index=index + multiple*a[i];
        multiple=multiple*10;
       // cout<<index<<endl;
        
    }

    if(index==n)
        return 1;
    else    
        return 0;


}


int main()
{
    
    system("cls");
    int a[]={0,5,6,3,2,9};
    int n=56329;
    int len=6;
    cout<<"Resp value"<<repsEqual(a,len,n);
    return 0;
}