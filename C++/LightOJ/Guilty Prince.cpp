#include<bits/stdc++.h>
using namespace std;
int x,y;
bool visited[20][20];
vector<string> v;
int row[] = {+1,+0,-1,+0};
int col[] = {+0,-1,+0,+1};
pair<int,int> nextMove(pair<int,int> curPos, int moveNo) {
    return {
        curPos.first+row[moveNo],
        curPos.second+col[moveNo]
    };
}
bool validity(pair<int,int> curPos) {
    if(curPos.first<0 || curPos.first==y) return false;
    if(curPos.second<0 || curPos.second==x) return false;
    if(v[curPos.first][curPos.second]=='#') return false;
    return true;
}
void dfs(pair<int,int> curPos, int *total) {
    visited[curPos.first][curPos.second]=true;
    for(int i=0; i<4; i++) {
        pair<int,int> tempPos = nextMove(curPos,i);
        if(validity(tempPos) && !visited[tempPos.first][tempPos.second]) {
            *total += 1;
            dfs(tempPos,total);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,homeI,homeJ;
    string s;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> x >> y;
        homeI = -1,homeJ = -1;
        v.clear();
        memset(visited,0,sizeof(visited));
        for(int j=0; j<y; j++) {
            cin >> s;
            v.push_back(s);
            if(homeI == -1) {
                size_t check = s.find('@');
                if(check != string::npos) {
                    homeI = j;
                    homeJ = check;
                }
            }
        }
        int total = 1;
        dfs({homeI,homeJ},&total);
        cout << "Case " << i << ": " << total << "\n";
    }
}
