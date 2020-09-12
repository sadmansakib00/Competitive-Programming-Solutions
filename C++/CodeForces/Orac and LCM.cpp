#include<bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("unroll-loops")
//#pragma GCC optimize("Ofast")
#ifndef ONLINE_JUDGE
    #define _WIN32_WINNT 0x0500
    #include<windows.h>
#endif
#define openFile(n) ShellExecute(nullptr,"open",n,nullptr,nullptr,SW_SHOWNORMAL);
#define closeP(n) system((string("taskkill /im ")+n+" /f").c_str());
#define closeConsole PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
#define opf "output.txt"
#define ipf "input.txt"
#define mem(n,x) memset(n,x,sizeof(n));
#define sf scanf
#define pf printf
#define ff first
#define ss second
#define pb push_back
#define MIVI map<int,vector<int>>
#define UMIVI unordered_map<int,vector<int>>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 200001
bool pFlag[N];
vector<int> primes;
MIVI pfCount;
void sieve() {
    int len = sqrt(N)+1;
    pFlag[1]=1;
    primes.pb(2);
    for(int i=4; i<N; i+=2)  pFlag[i]=1;
    for(int i=3; i<len; i+=2) {
        if(!pFlag[i]) {
            for(int j=i*i; j<N; j+=2*i) {
                pFlag[j]=1;
            }
        }
    }
    for(int i=3; i<N; i+=2) if(!pFlag[i])   primes.pb(i);
}
void factors(int n) {
    int cnt=0;
    if(n==1) return;
    if(!pFlag[n]) {
        pfCount[n].pb(1);
    } else {
        For(0,primes.size()) {
            if(n==1 || primes[i]>n) break;
            cnt = 0;
            if(!pFlag[n]) {
                pfCount[n].pb(1);
                break;
            }
            while(n%primes[i]==0) {
                n /= primes[i];
                cnt ++;
            }
            if(cnt != 0) pfCount[primes[i]].pb(cnt);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif
    sieve();
    LL n,temp;
    cin >> n;
    For(0,n) {
        cin >> temp;
        factors(temp);
    }
    temp = 1;
    for(MIVI::iterator it=pfCount.begin(); it!=pfCount.end(); it++) {
        if(it->second.size() == n) {
            sort(it->second.begin(),it->second.end());
            temp *= round(pow(it->first,it->second[1]));
        }
        if(it->second.size() == n-1) {
            sort(it->second.begin(),it->second.end());
            temp *= round(pow(it->first,it->second[0]));
        }
    }
    cout << temp << "\n";
    #ifndef ONLINE_JUDGE
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
