#include<bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int

int main() {
    horsePower;
    int t,n,a,b,ans,dif,tempA, tempB;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n;
        int anArr[n];
        flag = false;
        a = INT_MAX; //min
        b = -1; //max
        dif = -1;
        for(int i=0; i<n; i++) {
            cin >> anArr[i];
            if(anArr[i] != -1 ) {
                if(i>0) {
                    if(anArr[i-1] != -1) {
                        dif = max(dif,abs(anArr[i]-anArr[i-1]));
                        tempA = anArr[i];
                        tempB = anArr[i-1];
                    }
                }
            }
        }
        for(int i=0; i<n-1; i++) {
            if(anArr[i] != -1 && anArr[i+1] == -1) {
                if(anArr[i]>b) {
                    b = anArr[i];
                }
                if(anArr[i]<a) {
                    a = anArr[i];
                }
            }
            if(i>0) {
                if(anArr[i] != -1 && anArr[i-1] == -1) {
                    if(anArr[i]>b) {
                        b = anArr[i];
                    }
                    if(anArr[i]<a) {
                        a = anArr[i];
                    }
                }
            }
        }
        if(anArr[n-1] != -1 && anArr[n-2] == -1) {
            if(anArr[n-1]>b) {
                b = anArr[n-1];
            }
            if(anArr[n-1]<a) {
                a = anArr[n-1];
            }
        }
        if(a == INT_MAX && b == -1) {
            cout << "0 0\n";
        } else {
            if(dif>abs(a-b)/2) {
                cout << dif << " " << (tempA+tempB)/2 << "\n";
            } else {
                int temp = max(a,b)-(a+b)/2;
                cout << temp << " " << (a+b)/2 << "\n";
            }
        }
    }
}
