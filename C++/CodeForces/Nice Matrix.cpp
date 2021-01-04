#include<bits/stdc++.h>
using namespace std;
//#pragma gcc optimize("O3")
//#pragma gcc optimize("unroll-loops")
#ifdef EVAH
    #define _WIN32_WINNT 0x0500
    //#include<windows.h>
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
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif

    LL t,n,m,ans,temp;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> m;
        ans = temp = 0;
        LL mat[n][m],vis[n][m];
        For(0,n) {
            for(int j=0; j<m; j++) {
                vis[i][j] = 0;
                cin >> mat[i][j];
            }
        }
        For(0,n) {
            for(int j=0; j<m; j++) {
                if(vis[i][j]==0) {
                    //cout << "i = " << i << " j = " << j << "\n";
                    //cout << "ans = " << ans << "\n";
                    vis[i][j]=vis[n-1-i][j]=vis[i][m-j-1]=vis[n-1-i][m-j-1]=1;
                    temp = (mat[i][j]+mat[n-1-i][j]+mat[i][m-j-1]+mat[n-1-i][m-j-1])/4;
                    //cout << "temp = " << temp << "\n";
                    int tempTwo=temp-1,tempThree=temp+1,ansOne=0,ansTwo=0,ansThree=0;
                    if(i!=n-1-i) {
                        ansOne += (abs(temp-mat[i][j])+abs(temp-mat[n-1-i][j]));
                        ansTwo += (abs(tempTwo-mat[i][j])+abs(tempTwo-mat[n-1-i][j]));
                        ansThree += (abs(tempThree-mat[i][j])+abs(tempThree-mat[n-1-i][j]));
                        //if(i==j) continue;
                        if(j!=m-j-1) {
                            ansOne += (abs(temp-mat[i][m-j-1])+abs(temp-mat[n-1-i][m-j-1]));
                            ansTwo += (abs(tempTwo-mat[i][m-j-1])+abs(tempTwo-mat[n-1-i][m-j-1]));
                            ansThree += (abs(tempThree-mat[i][m-j-1])+abs(tempThree-mat[n-1-i][m-j-1]));
                        } else {
                            if(m%2==1 && j==m/2) {
                                continue;
                            }
                            ansOne += abs(temp-mat[i][m-j-1]);
                            ansTwo += abs(tempTwo-mat[i][m-j-1]);
                            ansThree += abs(tempThree-mat[i][m-j-1]);
                        }
                    } else {
                        ansOne += abs(temp-mat[i][j]);
                        ansTwo += abs(tempTwo-mat[i][j]);
                        ansThree += abs(tempThree-mat[i][j]);
                        if(m%2==1 && j==m/2) {
                            continue;
                        }
                        if(j!=m-j-1) {
                            ansOne += abs(temp-mat[i][m-j-1]);
                            ansTwo += abs(tempTwo-mat[i][m-j-1]);
                            ansThree += abs(tempThree-mat[i][m-j-1]);
                        }
                    }
                    ans += min(ansOne,min(ansTwo,ansThree));
                }
            }
        }
        cout << ans << "\n";
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
