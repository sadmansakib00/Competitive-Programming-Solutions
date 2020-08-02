#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,ans=0;
    string s;
    bool flag;
    set<char,greater<int>> aSet;
    set<char,greater<int>>::iterator it;
    cin >> n >> s;
    for(int i=0; i<s.length(); i++) if(s[i]!='a') aSet.insert(s[i]);
    for(it=aSet.begin(); it!=aSet.end(); it++) {
        for(int i=0; i<s.length(); i++) {
            if(s[i]==*it) {
                int l=i-1,h=i+1;
                flag=true;
                while(true) {
                    if(!flag) break;
                    flag = false;
                    if(l>-1) {
                        if(s[l]=='.' || s[l]==*it) {
                            l--;
                            flag = true;
                        } else {
                            if(s[l]==*it-1) {
                                s[i]='.';
                                ans++;
                                break;
                            }
                        }
                    }
                    if(h<s.length()) {
                        if(s[h]=='.' || s[h]==*it) {
                            h++;
                            flag = true;
                        } else {
                            if(s[h]==*it-1) {
                                s[i]='.';
                                ans++;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << ans << "\n";
}
