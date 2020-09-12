#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> v;
    int n,sum(0),total(0),coSum(0);
    cin >> n;
    int p[n];
    for(int m=0; m<n; m++) {
        cin >> p[m];
        sum += p[m];
    }
    v.push_back(1);
    total++;
    coSum += p[0];
    if(p[0]>(sum/2)) {
        cout << "1\n1";
    } else {
        for(int m=1; m<n; m++) {
            if(p[0]>=p[m]*2 && coSum <= sum/2) {
                total++;
                coSum += p[m];
                v.push_back(m+1);
            }
        }
        if(v.size() == 1 || coSum<=sum/2) {
            cout << "0\n";
        } else {
            cout << total << "\n";
            for(int m=0; m<v.size(); m++) {
                if(m>0)
                    cout << " ";
                cout << v[m];
            }
            cout << "\n";
        }
    }
}
