#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,temp,total=0,zeroes=0;
    vector<int> a;
    vector<int> b;
    vector<int> pos;
    vector<int> neg;
    vector<int>::iterator it;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    for(int i=0; i<n; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    for(int i=0; i<n; i++) {
        temp = a[i]-b[i];
        if(temp<0) {
            neg.push_back(abs(temp));
        } else if(temp == 0) {
            zeroes++;
        } else {
            pos.push_back(temp);
        }
    }
    sort(neg.begin(),neg.end());
    for(int i=0; i<pos.size(); i++) {
        total += pos.size()-1-i;
        if(neg.size()>0) {
            it = lower_bound(neg.begin(),neg.end(), pos[i]);
            total += (it-neg.begin());
        }
    }
    total += zeroes*pos.size();
    cout << total << "\n";
}
