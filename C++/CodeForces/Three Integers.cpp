#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    ll t,a,b,c,temp,ansA,ansB,ansC;
    cin >> t;
    while(t-- > 0) {
        cin >> a >> b >> c;
        ansA=INT_MAX,ansB=INT_MAX,ansC=INT_MAX;
        for(int i=1; i<=2*a; i++) {
            for(int j=1; j*i<=2*b; j++) {
                if(i*j>2*c) {
                    break;
                } else {
                    temp = i*j;
                    if(abs(a-i)+abs(b-temp)+abs(c-(c/temp)*temp)<abs(a-ansA)+abs(b-ansB)+abs(c-ansC)) {
                        ansA=i; ansB=temp; ansC=(c/temp)*temp;
                    }
                    if(abs(a-i)+abs(b-temp)+abs(c-(c/temp)*temp-temp)<abs(a-ansA)+abs(b-ansB)+abs(c-ansC)) {
                        ansA=i; ansB=temp; ansC=(c/temp)*temp+temp;
                    }
                }
            }
        }
        cout << abs(a-ansA)+abs(b-ansB)+abs(c-ansC) << "\n";
        cout << ansA << " " << ansB << " " << ansC << "\n";
    }
}
