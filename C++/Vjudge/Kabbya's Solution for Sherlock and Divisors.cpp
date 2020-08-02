#include <bits/stdc++.h>
using namespace std;
const int mxx=32000;
bool a[mxx];
vector<int> v;

void sieve(){
    int i,j;
    v.push_back(2);
    for(i=3; i*i<mxx; i+=2)
        if(!a[i])
            for(j=i*i; j<mxx; j+=i*2)
                a[j]=true;

    for(i=3; i<mxx; i+=2)
        if(!a[i])
            v.push_back(i);
}

int divisor(int num){
    int i,c=0;

    while(num%2==0){
        num/=2;
        c++;
    }

    for(i=1; v[i]*v[i]<=num && i<v.size(); i++){
        int div=1;
        while(num%v[i]==0){
            num/=v[i];
            div++;
        }
        c *=div;
    }

    if(num!=1) c*=2;
    return c;
}

int main(){
    sieve();
    int test;
    cin>>test;
    while(test--){
        int num;
        cin>>num;
        cout<<divisor(num)<<"\n";
    }
    return 0;
}
