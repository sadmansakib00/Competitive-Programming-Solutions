#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,i,j;
    string qt;
    int anArr[32];
    cin >> n;
    while(n!=0) {
        memset(anArr,-1,sizeof(anArr));
        while(n-- > 0) {
            cin >> qt;
            if(qt=="CLEAR") {
                cin >> i;
                anArr[i]=0;
            } else if(qt=="SET") {
                cin >> i;
                anArr[i]=1;
            } else if(qt=="OR") {
                cin >> i >> j;
                if(anArr[i]==-1 || anArr[j]==-1) {
                    if(anArr[i]==1 || anArr[j]==1) {
                        anArr[i]=1;
                    } else {
                        anArr[i]=-1;
                    }
                } else {
                    if(anArr[i]==1 || anArr[j]==1) {
                        anArr[i]=1;
                    } else {
                        anArr[i]=0;
                    }
                }
            } else {
                cin >> i >> j;
                if(anArr[i]==-1 || anArr[j]==-1) {
                    if(anArr[i]==0 || anArr[j]==0)
                        anArr[i]=0;
                    else
                        anArr[i]=-1;
                } else {
                    if(anArr[i]==1 && anArr[j]==1) {
                        anArr[i]=1;
                    } else {
                        anArr[i]=0;
                    }
                }
            }
        }
        for(int i=31; i>=0; i--) {
            if(anArr[i]==-1) cout << "?";
            else cout << anArr[i];
        }
        cout << "\n";
        cin >> n;
    }
}
