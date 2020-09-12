#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,x,total,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> x;
        map<int,int,greater<int>> aMap;
        map<int,int,greater<int>>::iterator it;
        total = 0;
        for(int i=0; i<n; i++) {
            cin >> temp;
            aMap.insert(pair<int,int>(temp,0));
        }
        it = aMap.begin();
        if(x%(it->first)==0) {
            cout << x/(it->first) << "\n";
        } else {
            if(x/it->first == 0) {
                bool tempFlag = false;
                it++;
                for(; it != aMap.end(); it++) {
                    if(x%(it->first)==0) {
                        if(x/it->first == 1) {
                            cout << "1\n";
                            tempFlag = true;
                            break;
                        }
                    }
                }
                if(!tempFlag) {
                    cout << "2\n";
                }
            } else {
                cout << (x/it->first)+1 << "\n";
            }
        }
    }
}
