#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool flag[801];

int main() {
    horsePower;
    int n,temp;
    bool insideFlag;
    cin >> n;
    n = 2*n;
    int anArr[n+1];
    map<int,pair<int,int>,greater<int>> sorted;
    map<int,pair<int,int>>::iterator it;

    for(int i=2; i<=n; i++) {
        for(int j=1; j<i; j++) {
            cin >> temp;
            sorted.insert(pair<int,pair<int,int>>(temp,pair<int,int>(i,j)));
        }
    }
    for(it=sorted.begin(); it != sorted.end(); it++) {
        if(!flag[(it->second).first] && !flag[(it->second).second]) {
            anArr[(it->second).first] = (it->second).second;
            anArr[(it->second).second] = (it->second).first;
            flag[(it->second).first] = true;
            flag[(it->second).second] = true;
        }

        //cout<<"{ "<<(it->second).first <<","<<(it->second).second<<"} -- > " << it->first << "\n";
    }


    for(int i=1; i<=n; i++) {
        cout << anArr[i] << " ";
    }
    cout << "\n";
}
