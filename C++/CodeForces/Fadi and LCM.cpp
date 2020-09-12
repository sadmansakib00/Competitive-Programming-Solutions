#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

ll gcd(ll a, ll b) {
    return b==0 ? a : gcd(b,a%b);
}
ll lcm(ll a, ll b) {
    return (a*b)/gcd(a,b);
}

int main() {
    horsePower;
    ll n,temp;
    bool flag = true;
    vector<ll> fact;
    cin >> n;
    temp = sqrt(n);
    for(int i=1; i<=temp; i++) {
        if(n%i==0) {
            fact.push_back(i);
            fact.push_back(n/i);
        }
    }
    sort(fact.begin(),fact.end());
    if(fact.size()%2==0) {
        temp = fact.size()/2 - 1;
    } else {
        temp = fact.size()/2;
        if(lcm(fact[temp],fact[temp])==n) {
            flag = false;
        } else {
            temp--;
        }
    }

    if(flag) {
        for(; temp>-1; temp--) {
            if(lcm(fact[temp],n/fact[temp])==n) {
                break;
            }
        }
    }
    cout << min(fact[temp],n/fact[temp]) << " " << max(fact[temp],n/fact[temp]) << "\n";
}
