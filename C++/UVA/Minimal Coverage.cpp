#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
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
#define PII pair<int,int>
#define For(x,n) for(int i=x; i<n; i++)
#define stv v+2*(mid-tl+1)
#define LL long long int
#define N 100000000

int main() {
    ios_base::sync_with_stdio(false);
    //cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        freopen(opf,"w",stdout);
    #endif

    int t, m, l, r, ansL, ansR;
    cin >> t;
    while(t-- > 0) {
        cin >> m;
        int flag = 0;
        set<pair<int, int> > aSet;
        set<pair<int, int> > ans;
        set<pair<int, int> >::iterator it;
        for(;;) {
            cin >> l >> r;
            if(l==0 && r==0) break;
            if(l<=0 && r>=m) {
                flag = 1;
                ansL = l;
                ansR = r;
            }
            if(l>=0 && l<=m) {
                aSet.insert({l,r});
            }
            if(r>=0 && r<=m) {
                aSet.insert({l,r});
            }
        }
        if(flag) {
            cout << "1\n" << ansL << " " << ansR << "\n";
            if(t!=0) cout << "\n";
            continue;
        }
        flag = 1;
        it = aSet.begin();
        int lastL = it->ff, lastR = it->ss;
        ansL = -1, ansR = INT_MIN;
        it++;
        if(lastL > 0) flag = 0;
        ans.insert({lastL, lastR});
        for(; it!=aSet.end(); it++) {
            //cout << "it->ff =  " << it->ff << " it->ss " << it->ss << "\n";
            //cout << "lastL = " << lastL << " " << " lastR = " << lastR << "\n";
            //cout << "ans.size() = " << ans.size() << "\n";
            if(lastR >= m) break;
            if(it->ff==lastL) {
                ans.erase({lastL,lastR});
                ans.insert({it->ff, it->ss});
                lastR = it->ss;
            } else if(it->ff < 0 && it->ss > lastR) {
                ans.erase({lastL,lastR});
                ans.insert({it->ff, it->ss});
                lastL = it->ff;
                lastR = it->ss;
                ansL = -1, ansR = INT_MIN;
            } else if(it->ff <= lastR) {
                if(it->ss > ansR) {
                    ansR = it->ss;
                    ansL = it->ff;
                }
            } else {
                if(ansR != INT_MIN) {
                    //cout << "yo\n";
                    ans.insert({ansL, ansR});
                    lastL = ansL, lastR = ansR;
                    ansL = -1, ansR = INT_MIN;
                    if(it->ff <= lastR) {
                        if(it->ss > ansR) {
                            ansR = it->ss;
                            ansL = it->ff;
                        }
                    } else {
                        if(it->ff != lastR+1) {
                            flag = 0;
                            break;
                        } else {
                            ans.insert({ansL, ansR});
                            lastL = ansL, lastR = ansR;
                            ansL = -1, ansR = INT_MIN;
                        }
                    }
                } else {
                    if(it->ff != lastR+1) {
                        //cout << "flagged\n";
                        flag = 0;
                        break;
                    } else {
                        ans.insert({ansL, ansR});
                        lastL = ansL, lastR = ansR;
                        ansL = -1, ansR = INT_MIN;
                    }

                }
            }
        }
        if(ansR != INT_MIN && ansR>lastR && lastR < m) {
            ans.insert({ansL, ansR});
        }
        it = ans.end();
        it--;
        if(!flag || it->ss < m) {
            cout << "0\n";
        } else {
            cout << ans.size() << "\n";
            for(it=ans.begin(); it!=ans.end(); it++) {
                cout << it->ff << " " << it->ss << "\n";
            }
        }
        if(t!=0) cout << "\n";
    }

    #ifdef EVAH
        openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
