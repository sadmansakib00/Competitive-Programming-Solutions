#include<bits/stdc++.h>
using namespace std;
int m,n,homeI,homeJ;
vector<string> v;
bool visited[20][20];
int row[] = {+1,+0,-1,+0};
int col[] = {+0,-1,+0,+1};
pair<int,int> nextMove(pair<int,int> curPos, int moveNo) {
    return {
        curPos.first+row[moveNo],
        curPos.second+col[moveNo]
    };
}
bool validity(pair<int,int> curPos) {
    if(curPos.first == 0 || curPos.first == m-1) return false;
    if(curPos.second == 0 || curPos.second == n-1) return false;
    if(v[curPos.first][curPos.second]=='m' || v[curPos.first][curPos.second]=='#')
        return false;
    return true;
}
int bfs(pair<int,int> curPos) {
    queue<pair<int,int> > q;
    map<pair<int,int>,int> level;
    visited[curPos.first][curPos.second] = true;
    q.push(curPos);
    level.insert(make_pair(curPos,0));
    while(!q.empty()) {
        curPos = q.front();
        q.pop();
        for(int i=0; i<4; i++) {
            auto tempPair = nextMove(curPos,i);
            if(validity(tempPair) && !visited[tempPair.first][tempPair.second]) {
                q.push(tempPair);
                level[tempPair] = level[curPos]+1;
                if(tempPair.first==homeI && tempPair.second==homeJ) {
                    return level[{homeI,homeJ}];
                }
                visited[tempPair.first][tempPair.second] = true;
            }
        }
    }
    return level[{homeI,homeJ}];
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,ans;
    string aStr;
    cin >> t;
    for(int q=1; q<=t; q++) {
        cin >> m >> n;
        ans = INT_MIN;
        v.clear();
        vector<pair<int,int> > abc;
        for(int i=0; i<m; i++) {
            cin >> aStr;
            v.push_back(aStr);
            for(int j=0; j<aStr.length(); j++) {
                if(aStr[j]=='a' || aStr[j]=='b' || aStr[j]=='c') {
                    abc.push_back(make_pair(i,j));
                }
                if(aStr[j]=='h') {
                    homeI=i, homeJ=j;
                }
            }
        }
        for(int i=0; i<3; i++) {
            memset(visited,0,sizeof(visited));
            ans = max(ans,bfs(abc[i]));
        }
        cout << "Case " << q << ": " << ans << "\n";
    }
}
