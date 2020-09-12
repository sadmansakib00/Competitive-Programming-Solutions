#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,k,maxOccur=INT_MIN;
    cin >> n >>k;
    int anArr[n];
    map<int,vector<int> > mark;
    map<int,int> aMap;
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        aMap[anArr[i]]++;
        if(aMap[anArr[i]]>maxOccur) {
            maxOccur = aMap[anArr[i]];
        }
    }
    if(maxOccur>k) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for(int i=0; i<n-1; i++) {
            if(i<k) {
                cout << i+1 << " ";
                mark[anArr[i]].push_back(i+1);
            } else {
                vector<int> v = mark[anArr[i]];
                jump:
                if(find(v.begin(),v.end(),aMap[anArr[i]])!=v.end()) {
                    aMap[anArr[i]]--;
                    goto jump;
                } else {
                    cout << aMap[anArr[i]] << " ";
                    aMap[anArr[i]]--;
                }

            }
        }
        if(n==k) {
            cout << n << "\n";
        } else {
            vector<int> v = mark[anArr[n-1]];
            jumpTwo:
            if(find(v.begin(),v.end(),aMap[anArr[n-1]])!=v.end()) {
                aMap[anArr[n-1]]--;
                goto jumpTwo;
            } else {
                cout << aMap[anArr[n-1]] << "\n";
            }
        }
    }
}
