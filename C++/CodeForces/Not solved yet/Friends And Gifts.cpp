#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main() {
    horsePower;
    int n,temp;
    bool flag;
    cin >> n;
    vector<int> same;
    set<int> distinct;
    set<int> natural;
    set<int>::iterator nIt;
    for(int i=1; i<=n; i++) {
        natural.insert(i);
    }
    int anArr[n+1];
    set<int> aSet;
    set<int>::iterator it;
    for(int i=1; i<=n; i++) {
        cin >> anArr[i];
        if(anArr[i]==0) {
            aSet.insert(i);
        }
        natural.erase(anArr[i]);
    }
    for(nIt=natural.begin(); nIt!=natural.end(); nIt++) {
        flag = false;
        for(it=aSet.begin(); it!=aSet.end(); it++) {
           if(*it==*nIt) {
                same.push_back(*nIt);
                flag = true;
            }
        }
        if(!flag) {
            distinct.insert(*nIt);
        }
    }
/*
    cout << "SAME == \n";
    for(int i=0; i<same.size(); i++) {
        cout << same[i] << " ";
    }
    cout << "\n";
    cout << "\n\nDistinct == \n";
    for(it = distinct.begin(); it!=distinct.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n\n\n";
*/
    if(same.size()==1) {
        it = distinct.begin();
        anArr[same[0]] = *it;
        aSet.erase(same[0]);
        distinct.erase(*it);
        distinct.insert(same[0]);
    } else {
        sort(same.begin(),same.end());
        for(int i=0; i<same.size(); i++) {
            if(i == same.size()-1) {
                anArr[same[i]] = same[0];
                aSet.erase(same[i]);
            } else {
                anArr[same[i]] = same[i+1];
                aSet.erase(same[i]);
            }
        }
    }
    /*
    cout << "aSet\n";
    for(it = aSet.begin(); it!=aSet.end(); it++) {
        cout << *it << " ";
    }
    cout << "\n\n";
    */
    for(it = aSet.begin(); it!=aSet.end(); it++) {
        nIt = distinct.begin();
        anArr[*it] = *nIt;
        distinct.erase(*nIt);
    }
    for(int i=1; i<=n; i++) {
        cout << anArr[i] << " ";
    }
    cout << "\n";
}
