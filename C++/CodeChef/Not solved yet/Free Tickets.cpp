#include <bits/stdc++.h>
using namespace std;
int findMinVertex(int *distance, bool *flag, int sizeD) {
    int minEdge = INT_MAX;
    int vertex = -1;
    for(int m=1; m<sizeD; m++) {
        if(!flag[m] && distance[m] < minEdge) {
            minEdge = distance[m];
            vertex = m;
        }
    }
    return vertex;
}
int* dijkstra(int **aMatrix, int source, int sizeD) {
    int *distance = new int[sizeD];
    bool *flag = new bool[sizeD];
    memset(flag, false, sizeD);
    for(int m=0; m<sizeD; m++) {
        distance[m] = INT_MAX;
    }
    distance[source] = 0;
    for(int m=1; m<sizeD; m++) {
        int v1 = findMinVertex(distance,flag,sizeD);
        flag[v1] = true;
        for(int v2=1; v2<sizeD; v2++) {
            if(aMatrix[v1][v2]>0 && !flag[v2]) {
                int temp = aMatrix[v1][v2]+distance[v1];
                if(temp<distance[v2]) {
                    distance[v2] = temp;
                }
            }
        }
    }
    return distance;
}
int main() {
    ios_base::sync_with_stdio(false);
    int city, edge, x, y;
    cin >> city >> edge;
    int **aMatrix = new int*[city+1];
    for(int m=0; m<=city; m++)
        aMatrix[m] = new int[city+1];
    for(int m=0; m<edge; m++) {
        cin >> x >> y;
        cin >> aMatrix[x][y];
    }
    int* distance = dijkstra(aMatrix, 1, city+1);
    sort(distance, distance+(city+1));
    cout << distance[city-1] << "\n";
}
