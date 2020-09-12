#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,temp,l,r;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        flag = false;
        l=0, r=0;
        map<int,vector<int> > aMap;
        map<int,vector<int> >::iterator it;
        for(int i=1; i<=n; i++) {
            cin >> temp;
            aMap[temp].push_back(i);
        }
        if(aMap.size()==n && n==200000) {
            cout << "NO\n";
            continue;
        }
        for(it=aMap.begin(); it!=aMap.end(); it++) {
            for(auto rit=aMap.rbegin(); rit!=aMap.rend(); rit++) {
                if(rit->first-it->first<=0) break;
                vector<int> vOne = it->second;
                vector<int> vTwo = rit->second;
                vector<int>::iterator lower,upper;
                for(int i=0; i<vOne.size(); i++) {
                    lower = lower_bound(vTwo.begin(),vTwo.end(),vOne[i]);
                    if(lower-vTwo.begin()-1>=0 && vTwo[lower-vTwo.begin()-1]!=vOne[i]) {
                        if(rit->first-it->first >= abs(vOne[i]-vTwo[lower-vTwo.begin()-1])+1) {
                            flag = true;
                            l = vOne[i];
                            r = vTwo[lower-vTwo.begin()-1];
                            break;
                        }
                    }
                    upper = upper_bound(vTwo.begin(),vTwo.end(),vOne[i]);
                    if(upper-vTwo.begin()!=vTwo.size() && vTwo[upper-vTwo.begin()] != vOne[i]) {
                        if(rit->first-it->first >= abs(vOne[i]-vTwo[upper-vTwo.begin()])+1) {
                            flag = true;
                            l = vOne[i];
                            r = vTwo[upper-vTwo.begin()];
                            break;
                        }
                    }
                }
                if(flag) break;
            }
            if(flag) {
                break;
            }
        }
        if(!flag) {
            cout << "NO\n";
        } else {
            if(l>r) swap(l,r);
            cout << "YES\n" << l << " " << r << "\n";
        }
    }
}
