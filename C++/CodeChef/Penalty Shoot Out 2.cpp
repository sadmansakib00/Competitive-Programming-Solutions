#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t,n,ag,bg;
    string goalStream;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        cin >> goalStream;
        ag=0, bg=0;
        flag = true;
        for(int i=0,ac=0,bc=0; i<2*n; i++) {
            if(i%2==0) {
                ac++;
                if(goalStream[i] == '1') {
                    ag++;
                }
                if(ag>bg) {
                    if(ag-bg>n-bc && flag) {
                        cout << i+1 << "\n";
                        flag = false;
                    }
                } else if(ag<bg) {
                    if(bg-ag>n-ac && flag) {
                        cout << i+1 << "\n";
                        flag = false;
                    }
                }
            } else {
                bc++;
                if(goalStream[i] == '1') {
                    bg++;
                }
                if(ag>bg) {
                    if(ag-bg>n-bc && flag) {
                        cout << i+1 << "\n";
                        flag = false;
                    }
                } else if(ag<bg) {
                    if(bg-ag>n-ac && flag) {
                        cout << i+1 << "\n";
                        flag = false;
                    }
                }
            }
        }
        if(ag==bg) {
            cout << 2*n << "\n";
        }
    }
}
