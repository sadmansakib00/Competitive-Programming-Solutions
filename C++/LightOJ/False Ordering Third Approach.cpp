#include <bits/stdc++.h>
using namespace std;
#define range 1001

struct aComparator {
    bool operator()(const pair<int,int> &left, const pair<int,int> &right) const
     {
         if(left.first == right.first) {
            if(left.second>right.second) {
                return true;
            } else {
                return false;
            }
         } else {
            return left.first<right.first;
         }
     }
};

int finalDivs[range];
map<pair<int,int>,int,aComparator> totalDiv;
bool flag[range];
vector<int> sv;

void sieve() {
    int root = sqrt(range);
    for(int m=4; m<range; m+=2) {
        flag[m] = true;
    }
    for(int m=3; m<=root; m+=2) {
        if(!flag[m]) {
            for(int n=m*m; n<range; n+=2*m) {
                flag[n] = true;
            }
        }
    }
    sv.push_back(2);
    for(int m=3; m<range; m+=2) {
        if(!flag[m]) {
            sv.push_back(m);
        }
    }
}

int divisors(int n) {
    if(n==1 || n==0)
        return n;
    if(!flag[n]) {
        return 2;
    }
    int total = 0;
    vector<int> temp;
    for(int m=0; sv[m]<=n ;m++) {
        total = 0;
        while(n%sv[m]==0) {
            total++;
            n = n/sv[m];
        }
        temp.push_back(total+1);
    }
    total = temp[0];
    for(int m=1; m<temp.size(); m++) {
        total *= temp[m];
    }
    return total;
}

void fillDiv() {
    for(int i=1; i<range; i++) {
        totalDiv.insert(make_pair(pair<int,int>(divisors(i),i),-1));
    }

    map<pair<int,int>,int>::iterator it;
    int j=1;
    for(it=totalDiv.begin(); it!=totalDiv.end(); it++, j++) {
        finalDivs[j] = (it->first).second;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    sieve();
    fillDiv();
    int t,n;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        cout << "Case " << i << ": " << finalDivs[n] << "\n";
    }
}
