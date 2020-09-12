#include<bits/stdc++.h>
using namespace std;
int homeI, homeJ;
bool visited[8][8];
int row[] = {-2,-1,+1,+2,+2,+1,-1,-2};
int col[] = {+1,+2,+2,+1,-1,-2,-2,-1};
pair<int,int> nextMove(pair<int,int> curPos, int moveNo) {
    return {
        curPos.first+row[moveNo],
        curPos.second+col[moveNo]
    };
}
bool validity(pair<int,int> curPos) {
    if(curPos.first<0 || curPos.first>7) return false;
    if(curPos.second<0 || curPos.second>7) return false;
    return true;
}
int bfs(pair<int,int> curPos) {
    if(curPos.first==homeI && curPos.second==homeJ) {
        return 0;
    }
    map<pair<int,int>, int> level;
    level[curPos] = 0;
    queue<pair<int,int>> q;
    q.push(curPos);
    visited[curPos.first][curPos.second] = true;
    while(!q.empty()) {
        curPos = q.front();
        q.pop();
        for(int i=0; i<8; i++) {
            pair<int,int> tempPos = nextMove(curPos,i);
            if(validity(tempPos) && !visited[tempPos.first][tempPos.second]) {
                level[tempPos] = level[curPos]+1;
                if(tempPos.first==homeI && tempPos.second==homeJ) {
                    return level[tempPos];
                }
                q.push(tempPos);
                visited[tempPos.first][tempPos.second] = true;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    string x,y;
    while(cin >> x) {
        cin >> y;
        homeI=y[0]-'a';
        homeJ=y[1]-'1';
        memset(visited,0,sizeof(visited));
        cout << "To get from " << x << " to " << y << " takes " << bfs({x[0]-'a',x[1]-'1'}) << " knight moves.\n";
    }
}
