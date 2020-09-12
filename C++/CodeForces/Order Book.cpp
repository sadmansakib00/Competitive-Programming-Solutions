#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int n,s,price,vol,temp,tempTwo;
    char dir;
    map<int,int,greater<int>> sell;
    map<int,int,greater<int>> buy;
    map<int,int>::iterator it;
    cin >> n >> s;
    for(int i=0; i<n; i++) {
        cin >> dir >> price >> vol;
        if(dir == 'B') {
            it = buy.find(price);
            if(it != buy.end()) {
                it->second = it->second+vol;
            } else {
                buy.insert(pair<int,int>(price,vol));
            }
        } else {
            it = sell.find(price);
            if(it != sell.end()) {
                it->second = it->second+vol;
            } else {
                sell.insert(pair<int,int>(price,vol));
            }
        }
    }

    temp = 0;
    tempTwo = 0;
    for(it=sell.begin(); it!=sell.end(); it++) {
        if(s<=sell.size()) {
            tempTwo++;
            if(tempTwo<=sell.size()-s)
                continue;
        }
        temp++;
        cout << "S " << it->first << " " << it->second << "\n";
        if(temp>=s) {
            break;
        }
    }
    temp = 0;
    for(it=buy.begin(); it!=buy.end(); it++) {
        temp++;
        cout << "B " << it->first << " " << it->second << "\n";
        if(temp>=s) {
            break;
        }
    }
}
