#include <bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

bool flag[101];
bool palindromes[101];

bool palindromeCheck(string aStr) {
    bool flag = true;
    int len = aStr.length();
    for(int i=0; i<len/2; i++) {
        if(aStr[i] != aStr[len-i-1]) {
            flag = false;
            break;
        }
    }
    return flag;
}

int checkReverse(int pos,int n,int m,string anArr[]) {
    for(int i=0; i<n; i++) {
        if(i==pos) {
            continue;
        } else {
            string temp = anArr[i];
            reverse(temp.begin(), temp.end());
            if(temp == anArr[pos]) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    horsePower;
    int n,m,temp;
    cin >> n >> m;
    string anArr[n];
    string ans = "", left="", right="";
    bool tempFlag = false;
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        if(palindromeCheck(anArr[i])) {
            palindromes[i] = true;
        }
    }
    for(int i=0; i<n; i++) {
        if(!flag[i]) {
            temp = checkReverse(i,n,m,anArr);
            if(temp != -1) {
                flag[i] = true, flag[temp] = true;
                left += anArr[i];
                right = anArr[temp] + right;
            } else {
                if(!tempFlag) {
                    if(palindromes[i]) {
                        ans = anArr[i];
                    }
                }
            }
        }
    }
    ans = left + ans + right;
    cout << ans.length() << "\n" << ans << "\n";
}
