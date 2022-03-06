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

map<int, string> aMap;

void printHorizontal(int dig, int s, int part) {
    cout << " ";
    for(int k=0; k<s; k++) {
        if(aMap[dig][part]=='1') cout << "-";
        else cout << " ";
    }
    cout << " ";
}
void printVertical(int dig, int s, int part) {
    if(part<=s) part = 5;
    else part = 4;
    if(aMap[dig][part]=='1') cout << "|";
    else cout << " ";
    for(int i=0; i<s; i++) {
        cout << " ";
    }
    if(part == 5) part = 1;
    else part = 2;
    if(aMap[dig][part]=='1') cout << "|";
    else cout << " ";
}

void digPrint(string dig, int s) {
    for(int i=0; i<2*s+3; i++) {
        for(int j=0; j<dig.length(); j++) {
            if(j!=0) cout << " ";
            if(i==0 || i==(2*s+3)/2 || i==2*s+2) {
                int temp = 0;
                if(i==(2*s+3)/2) temp = 6;
                else if(i==2*s+2) temp = 3;
                printHorizontal(dig[j]-'0', s, temp);
            } else {
                printVertical(dig[j]-'0', s, i);
            }
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    #ifdef EVAH
        //freopen(ipf,"r",stdin);
        //openFile(ipf);
        //closeConsole;
        //freopen(opf,"w",stdout);
    #endif
    /*
                 0
                 _
               5| |1
                6_
               4| |2
                 _
                 3

    */
             //0123456
    aMap[0] = "1111110";
    aMap[1] = "0110000";
    aMap[2] = "1101101";
    aMap[3] = "1111001";
    aMap[4] = "0110011";
    aMap[5] = "1011011";
    aMap[6] = "1011111";
    aMap[7] = "1110000";
    aMap[8] = "1111111";
    aMap[9] = "1111011";

    LL s;
    string n;
    cin >> s >> n;
    while(!(s==0 && stoi(n)==0)) {
        digPrint(n,s);
        cout << "\n";
        cin >> s >> n;
    }

    #ifdef EVAH
        //openFile(opf);
        //Sleep(3000);
        //closeP("notepad.exe");
        //closeConsole;
    #endif
}
