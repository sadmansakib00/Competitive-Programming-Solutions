#include<bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
//Spam //Spam //Spam
vector<int> binary;
ll bcd[51];

void makeBCD() {
    bcd[1] = 1;
    for(int i=2; i<51; i++) {
        bcd[i] = bcd[i-1]+bcd[i-1];
    }
}

void toBinary(ll n) {
    vector<int> temp;
    binary = temp;
    while(n > 0) {
        if(n%2==1) {
            binary.push_back(1);
        } else {
            binary.push_back(0);
        }
        n /= 2;
    }
}
ll toDecimal(string aStr) {
    ll n = 0;
    for(int i=aStr.length()-1; i>-1; i--) {
        if(aStr[i]=='1')
            n += bcd[aStr.length()-i];
    }
    return n;
}
int main() {
    horsePower;
    makeBCD();
    ll t,n,zeroes=0,ones=0;
    string aStr;
    bool oneFlag;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> n;
        aStr = "";
        toBinary(n);
        zeroes=0,ones=0;
        int j=0;
        oneFlag = false;
        for(; j<binary.size(); j++) {
            if(binary[j]==0) {
                if(oneFlag) {
                    break;
                }
                zeroes++;
            } else if(binary[j]==1) {
                ones++;
                oneFlag = true;
            }
        }
        if(j != -1) {
            for(int k=binary.size()-1; k>j; k--) {
                aStr += to_string(binary[k]);
            }
            aStr += "1";
            for(int k=0; k<zeroes+1; k++) {
                aStr += "0";
            }
            for(int k=1; k<ones; k++) {
                aStr += "1";
            }

        } else {
            aStr = "1";
            cout << 1;
            for(int k=0; k<ones; k++) {
                aStr = "0";
            }
        }
        cout << "Case " << i << ": " << toDecimal(aStr) << "\n";
    }
}
