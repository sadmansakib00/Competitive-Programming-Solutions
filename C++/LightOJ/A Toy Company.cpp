#include<bits/stdc++.h>
using namespace std;
string start,finish;
unordered_set<string> forbidden;
int bfs() {
    if(forbidden.count(finish)==1) return -1;
    queue<string> q;
    unordered_map<string,int> visited;
    unordered_map<string,int> level;
    string curStr;
    q.push(start);
    visited[start] = 1;
    level[start] = 0;
    int x = 0;
    while(!q.empty()) {
        start = q.front();
        //cout << "start = " << start << " level = " << level[start] << "\n";
        curStr = start;
        if(start==finish) return level[start];
        x = level[start];
        q.pop();
        if(forbidden.count(start)==0) {
            for(int i=0; i<3; i++) {
                    if(start[i]==finish[i]) continue;
                    start = curStr;
                    if(start[i]=='a') {
                        start[i]='z';
                        if(visited[start]==0 && forbidden.count(start)==0) {
                            visited[start]=1;
                            q.push(start);
                            level[start]=x+1;
                        }
                        start[i]='b';
                        if(visited[start]==0 && forbidden.count(start)==0) {
                            visited[start]=1;
                            q.push(start);
                            level[start]=x+1;
                        }
                    } else {
                        start[i]--;
                        if(visited[start]==0 && forbidden.count(start)==0) {
                            visited[start]=1;
                            q.push(start);
                            level[start]=x+1;
                        }
                        start[i]++;
                        if(start[i]=='z') {
                            start[i]='a';
                        } else {
                            start[i]++;
                        }
                        if(visited[start]==0 && forbidden.count(start)==0) {
                            visited[start]=1;
                            q.push(start);
                            level[start]=x+1;
                        }
                    }
                }
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false);
    int t,n;
    char charArr[3];
    string strArr[3];
    cin >> t;
    for(int i=1; i<=t; i++) {
        cin >> start >> finish >> n;
        forbidden.clear();
        while(n-- > 0) {
            cin >> strArr[0] >> strArr[1] >> strArr[2];
            for(int x=0; x<strArr[0].size(); x++) {
                for(int y=0; y<strArr[1].size(); y++) {
                    for(int z=0; z<strArr[2].size(); z++) {
                        charArr[0]=strArr[0][x];
                        charArr[1]=strArr[1][y];
                        charArr[2]=strArr[2][z];
                        string tempStr(charArr,3);
                        forbidden.insert(tempStr);
                    }
                }
            }
        }
        cout << "Case " << i << ": " << bfs() << "\n";
    }
}
