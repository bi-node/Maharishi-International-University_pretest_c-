#include<iostream>
#include<stdlib.h>
using namespace std;

int ksmallfactors(int k, int n)
     {
            int result = 0;
            int u = 1, v = 1;
            for (int i = 2; i < n; i++)
            {
                if (n % i == 0)
                {
                    u = v;
                    v = i;
                    if (u * v == n)
                    {
                        if (u < k && v < k)
                        {
                            result = 1;
                            break;
                        }
                    }

                }
            }
            return result;

}

int main()
{
    
    cout<<ksmallfactors(6,14);
    return 0;
}