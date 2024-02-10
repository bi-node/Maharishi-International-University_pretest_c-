#include<iostream>
#include<stdlib.h>
using namespace std;

int areAnagrams(char a1[],char a2[], int len)
{
int cnt=0;
int cnt2=0;
	  
	  for (int i = 0; i < len; i++) 
      {
		for (int j = 0; j < len; j++) 
        {
			if(a1[i]==a1[j])
            {
				cnt++;
			}
			if(a1[i]==a2[j])
            {
				cnt2++;
			}
		}
		if(cnt!=cnt2)
        {
			return 0;
		}
	}
	  
	  return 1;
	  
}
int main()
{
    char a1[]={'p','o','l','l'};
    char a2[]={'p','o','o','l'};
    int len=3;
    cout<<areAnagrams(a1,a2,len);
    return 0;
}