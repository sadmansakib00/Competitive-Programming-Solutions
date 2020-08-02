//NOT COMPLETED

#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int primes[9591];
void seive()
{
    bool flag[100001];
    for(int m=0; m<100001; m++)
        flag[m]=1;
    int limit = sqrt(100001)+1;
    for(int m=2; m<limit; m++)
    {
        if(flag[m])
        {
            for(int n=m; n*m<100001; n++)
            {
                flag[m*n]=false;
            }
        }
    }
    for(int m=2,n=0; m<100001; m++)
    {
        if(flag[m])
        {
            primes[n] = m;
            n++;
        }
    }
}
int main()
{
    seive();
    ios_base::sync_with_stdio(false);
    int tests;
    //scanf("%d",&tests);
    cin >> tests;
    while(tests-- > 0)
    {
        unsigned long long int p,q;
        //scanf("%d %d",&p,&q);
        cin >> p >> q;
        //printf("p = %d q = %d\n",p,q);
        //cout << p << " " << q << endl;
        for(int m=0; m<9591; m++)
        {
            if(p%primes[m]==0 && q%primes[m]==0)
            {
                p = p/primes[m];
                q = q/primes[m];
                m=0;
            }
        }
        cout << p << " / " << q << endl;
    }
}
