#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,mid=0,cost=0,tempCost=0,ansMid=0;
    cin >> n;
    int anArr[n];
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
    }
    sort(anArr,anArr+n);
    if(n%2==0) {
        mid = (anArr[n/2]+anArr[n/2-1])/2;
    } else {
        mid = anArr[n/2];
    }
    for(int i=0; i<n; i++) {
        if(anArr[i]<mid-1) {
            cost += mid-anArr[i]-1;
        }
        if(anArr[i]>mid+1) {
            cost += anArr[i]-mid-1;
        }
    }
    ansMid = mid;
    mid++;
    for(int i=0; i<n; i++) {
        if(anArr[i]<mid-1) {
            tempCost += mid-anArr[i]-1;
        }
        if(anArr[i]>mid+1) {
            tempCost += anArr[i]-mid-1;
        }
    }
    if(tempCost<cost) {
        ansMid = mid;
        cost = tempCost;
    }
    tempCost = 0;
    mid -= 2;
    for(int i=0; i<n; i++) {
        if(anArr[i]<mid-1) {
            tempCost += mid-anArr[i]-1;
        }
        if(anArr[i]>mid+1) {
            tempCost += anArr[i]-mid-1;
        }
    }
    if(tempCost<cost) {
        ansMid = mid;
        cost = tempCost;
    }
    cout << ansMid << " " << cost << "\n";
}
