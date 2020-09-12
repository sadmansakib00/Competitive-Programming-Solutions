#include <bits/stdc++.h>
using namespace std;
int main() {
    int tests,days,places;
    cin >> tests;
    while(tests-- > 0) {
        cin >> days >> places;
        int plan[days];
        int finalPlan[days];
        for(int m=0; m<days; m++)
            finalPlan[m] = 0;
        for(int m=0; m<days; m++) {
            cin >> plan[m];
        }
        for(int m=0; m<days; m++) {
            if(plan[m]==-1) {
                if(m==0 && days>1) {
                    for(int n=1; n<=places; n++) {
                        if(n!=plan[m+1]) {
                            finalPlan[m]=n;
                            break;
                        }
                    }
                    if(finalPlan[m]==0) {
                        cout << "NO\n";
                        break; break;
                    }
                }
                else if(m==days-1 && days>1) {
                    for(int n=1; n<=places; n++) {
                        if(n!=finalPlan[m-1]) {
                            finalPlan[m] = n;
                            break;
                        }
                    }
                    if(finalPlan[m]==0) {
                        cout << "NO\n";
                        break; break;
                    }
                } else {
                    for(int n=1; n<=places; n++) {
                        if(n!=finalPlan[m-1] && n!=plan[m+1]) {
                            finalPlan[m] = n;
                            break;
                        }
                    }
                    if(finalPlan[m]==0) {
                        cout << "NO\n";
                        break; break;
                    }
                }
            } else {
                finalPlan[m] = plan[m];
            }
        }
        if(finalPlan[days-1] != 0) {
            cout << "YES\n";
            for(int n=0; n<days; n++) {
                if(n>0)
                    cout << " ";
                cout << finalPlan[n];
            }
            cout << "\n";
        }
    }
}
