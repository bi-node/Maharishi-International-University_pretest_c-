#include<iostream>
#include<stdlib.h>
using namespace std;
int is121Array(int a[], int len);

int main()
{
    int a[]={1,1,2,2,2,1,1,1};
    int len=8;
    cout<<" "<<is121Array(a,len);
    return 0;
}

int is121Array(int a[], int len) 
{

        int countBeginningOnes = 0;
        int countEndingOnes = 0;
        int countMiddleTwos = 0;
        bool beginningOnes = false;
        bool middleTwos = false;
        bool endingOnes = false;

        if (a[0] != 1) 
        {
            return 0;
        }

        for (int i = 0; i < len; i++) 
        {
            if (a[i] == 1 && !middleTwos && !endingOnes) 
            {
                beginningOnes = true;
                countBeginningOnes++;
                continue;
            }
            beginningOnes = false;
            if (a[i] == 2 && !beginningOnes && !endingOnes) 
            {
                middleTwos = true;
                countMiddleTwos++;
                continue;
            }
            middleTwos = false;
            if (a[i] == 1 && !beginningOnes && !middleTwos) 
            {
                countEndingOnes++;
                endingOnes = true;
                continue;
            }
        }

        for (int i = 0; i < len; i++) {
            if (a[i] == 3 || a[i] == 4 || a[i] == 5 || a[i] == 6 || a[i] == 7 || a[i] == 8 || a[i] == 9 || a[i] == 0) {
                return 0;
            }
        }

        if (countBeginningOnes != countEndingOnes) {
            return 0;
        }
        if (countMiddleTwos == 0) {
            return 0;
        }

        return 1;
    }