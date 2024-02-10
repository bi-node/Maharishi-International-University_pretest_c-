#include<iostream>
#include<stdlib.h>
using namespace std;
int isMercurial(int a[], int len)
{
    int ismerc=1;
    for(int i=0; i<len; i++)
    {
        if(a[i]==1)
        {
            for(int j=i+1; j<len; j++)
            {
                if(a[j]==3)
                {
                    for(int k=j+1; k<len; k++)
                    {
                        if(a[k]==1)
                        {
                             ismerc=0;
                             break;  
                        }
                    }
                }
            }
        }
    }
return ismerc;

}

int main()
{
    int a[]={3, 3, 3, 3, 3, 3};
    int len=sizeof(a)/sizeof(a[0]);
    cout<<isMercurial(a,len);
    return 0;
}