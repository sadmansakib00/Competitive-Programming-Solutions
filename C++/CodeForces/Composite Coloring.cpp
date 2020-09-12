#include<bits/stdc++.h>
using namespace std;
#define pRange 1050

bool flag[pRange];
vector<int> sv;
vector<vector<int> > primeFactors(pRange);
vector<vector<int> >::iterator it;
void sieve() {
    int root = sqrt(pRange);
    for(int m=4; m<pRange; m+=2) {
        flag[m] = true;
    }
    for(int m=3; m<=root; m+=2) {
        if(!flag[m]) {
            for(int n=m*m; n<pRange; n+=2*m) {
                flag[n] = true;
            }
        }
    }
    sv.push_back(2);
    for(int m=3; m<pRange; m+=2) {
        if(!flag[m]) {
            sv.push_back(m);
        }
    }
}

vector<int> primeFactoring(int n) {
    vector<int> v;
    for(int j=0; sv[j]<=n; j++) {
        if(n%sv[j]==0) {
            v.push_back(sv[j]);
        }
        while(n%sv[j]==0) {
            n = n/sv[j];
        }
        if(n==0) {
            break;
        }
    }
    return v;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve();
    primeFactors[1].push_back(1); //Weird, right? :3
    for(int i=2; i<1001; i++) {
        primeFactors[i] = primeFactoring(i);
    }
    int t,n;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        map<int,vector<int> > aMap;
        map<int,vector<int> >::iterator it;
        int givenArr[n];
        int coloredArr[1001];
        for(int i=0; i<n; i++) {
            cin >> givenArr[i];
            vector<int> temp = primeFactors[givenArr[i]];
            aMap[temp[0]].push_back(givenArr[i]);
        }
        int curColor=1;
        for(it=aMap.begin(); it!=aMap.end(); it++, curColor++) {
            vector<int> temp = it->second;
            for(int j=0; j<temp.size(); j++) {
                coloredArr[temp[j]] = curColor;
            }
        }
        cout << aMap.size() << "\n";
        for(int i=0; i<n-1; i++) {
            cout << coloredArr[givenArr[i]] << " ";
        }
        cout << coloredArr[givenArr[n-1]] << "\n";
    }
}
