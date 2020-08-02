#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define pRange 1001

int finalArr[pRange];
int totalDiv[pRange];
bool flag[pRange];
vector<int> sv;
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
    for(int m=1; m<pRange; m++) {
        totalDiv[m] = divisors(m);
    }
}
void falseOrder() {
    for(int m=1; m<pRange; m++) {
        finalArr[m] = m;
    }
    int temp,tempFinal;
    for(int m=2; m<pRange; m++) {
        temp = totalDiv[m];
        tempFinal = m;
        for(int n=m-1; n>=1; n--) {
            if(temp<totalDiv[n] || (temp==totalDiv[n] && m>n)) {
                totalDiv[n+1] = totalDiv[n];
                totalDiv[n] = temp;

                finalArr[n+1] = finalArr[n];
                finalArr[n] = tempFinal;
            } else {
                break;
            }
        }
    }
}
int main() {
    //horsePower;   /* It doesn't work if I put cin.tie or cout.tie */
    sieve();
    fillDiv();
    falseOrder();
    int t,n;
    cin>>t;
    for(int m=1; m<=t; m++) {
        cin >> n;
        cout << "Case " << m << ": " << finalArr[n] << "\n";
    }
}
