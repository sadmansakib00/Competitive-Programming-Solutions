#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define horsePower ios_base::sync_with_stdio(false);

int main() {
    horsePower;
    cin.tie(NULL);
    ull t,n,m,total,temp;
    cin >> t;
    while(t-- > 0) {
        vector<int> av;
        cin >> n >> m;
        int anArr[m];
        total = 0;
        for(int i=0; i<m; i++) {
            cin >> anArr[i];
            cout << "First e anArr[i] == " << anArr[i] << "\n";
            total += anArr[m];
        }
        if(total<n) {
            cout<< "-1\n";
        } else {
            total = 0;
            sort(anArr,anArr+m);
            for(int i=0; i<m; i++) {
                cout << "anArr[i] == " << anArr[i] << "\n";
            }
            for(int i=m-1; i>-1; i--) {
                cout << "n == " << n << " anArr[i] == " << anArr[i] << "\n";
                if(n<1) {
                    break;
                }
                if(anArr[i]<n) {
                    n -= anArr[i];
                } else {
                    if(anArr[i]==1) {
                        av.push_back(anArr[i]);
                    } else {
                        while(anArr[i]>1) {
                            anArr[i] /= 2;
                            av.push_back(anArr[i]);
                        }
                    }
                }
            }
            cout << "ekhane n == " << n << "\n";
            if(n==0) {
                cout << "0\n";
            } else {
                sort(av.begin(),av.end(),greater<int>());
                for(int i=0; i<av.size(); i++) {
                    if(n<1) {
                        break;
                    }
                    if(av[i]<n) {
                        n -= av[i];
                        total++;
                    }
                }
            }
            if(n==0) {
                cout << total << "\n";

            } else {
                cout << "-1\n";
            }
        }

    }
}
