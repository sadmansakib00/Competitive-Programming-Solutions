#include<bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

void print(vector<map<int,int>> &aVecMap, map<int,int>::iterator it, int anArr[]) {
    /*
    for(; it!=aMap.end(); it++) {
        cout << it->first << "  " << it->second << "\n";
    }


    for(int i=0; i<5; i++) {
        cout << anArr[i] << "\n";
    }
    */
    for(; it!=aVecMap[2].end(); it++) {
        cout << it->first << "  " << it->second << "\n";
    }
    for(int i=0; i<11; i++) {
        cout << "Printing " << i << "\n";
    }
}

int main() {
    horsePower;
    vector<map<int,int>> aVecMap(11);
    map<int,int>::iterator it;
    int anArr[5];
    aVecMap[10].insert(pair<int,int>(3,90));
    aVecMap[2].insert(pair<int,int>(2,40));
    aVecMap[2].insert(pair<int,int>(8,70));
    aVecMap[2].insert(pair<int,int>(5,20));
    aVecMap[10].insert(pair<int,int>(9,50));
    it = aVecMap[2].begin();
    it++;
    anArr[0] = 23;
    anArr[1] = 52;
    anArr[2] = 59;
    anArr[3] = 98;
    anArr[4] = 57;
    print(aVecMap,it,anArr);

}
