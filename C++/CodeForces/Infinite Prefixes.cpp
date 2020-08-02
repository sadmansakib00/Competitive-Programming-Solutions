#include <bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int t,n,x,ones,zeroes,times,ans,tempOnes,tempZeroes;
    string binStr;
    cin >> t;
    while(t-- > 0) {
        ones=0, zeroes=0,times=1,ans=0;
        cin >> n >> x >> binStr;
        for(int i=0; i<binStr.length(); i++) {
            if(binStr[i] == '0') {
                zeroes++;
            } else {
                ones++;
            }
        }
        if(x != 0) {
            if(zeroes-ones == 0) {
                times = 0;
            } else {
                times = abs(x/(zeroes-ones));
            }
            if(times==0) {
                for(; times<2; times++) {
                    tempZeroes = times*zeroes;
                    tempOnes = times*ones;
                    for(int i=0; i<binStr.length(); i++) {
                        if(binStr[i] == '0') {
                            tempZeroes++;
                        } else {
                            tempOnes++;
                        }
                        if(tempZeroes-tempOnes==x) {
                            ans++;
                        }
                    }
                }
            } else {
                for(int i=times-1; i<=times+2; i++) {
                    tempZeroes = i*zeroes;
                    tempOnes = i*ones;
                    for(int j=0; j<binStr.length(); j++) {
                        if(binStr[j]=='0') {
                            tempZeroes++;
                        } else {
                            tempOnes++;
                        }
                        if(tempZeroes-tempOnes==x) {
                            ans++;
                        }
                    }
                }
            }
        }  else {
            ans = 1;
            if(zeroes-ones == 0) {
                ans = -1;
            }  else {
                bool flag = true,tempFlag;
                times = 0;
                while(flag) {
                    tempFlag = false;
                    //cout << "times = " << times << "\n";
                    tempZeroes = times*zeroes;
                    tempOnes = times*ones;
                    //cout << "tempZeroes = " << tempZeroes << "\n";
                    //cout << "tempOnes = " << tempOnes << "\n";
                    for(int i=0; i<binStr.length(); i++) {
                        //cout << "I == " << i << "\n";
                        //cout << "Here\n";
                        if(binStr[i]=='0')
                            tempZeroes++;
                        else
                            tempOnes++;
                        if(tempZeroes-tempOnes==0) {
                            //cout << "i == " << i << "\n";
                            //cout << "zeroes = " << tempZeroes << "  ones = " << tempOnes << "\n";
                            tempFlag = true;
                            ans++;
                        }
                    }
                    if(!tempFlag) {
                        flag = false;
                    }
                    times++;
                }
            }
        }
        cout << ans << "\n";
    }
}
