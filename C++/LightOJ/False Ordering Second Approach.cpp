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


int divisors(int n) {
    int divTotal = 0;
    int temp = sqrt(n);
    for(int i=1; i<=temp; i++) {
        if(n%i==0) {
            divTotal++;
            if(i != n/i) {
                divTotal++;
            }
        }
    }
    return divTotal;
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
    fillDiv();
    int t,n;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        cout << "Case " << i << ": " << finalDivs[n] << "\n";
    }
}
