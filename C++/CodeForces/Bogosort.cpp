#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,n,temp; cin >> t;
    while(t-- > 0) {
        cin >> n;
        vector<int> av;
        for(int i=0; i<n; i++) {
            cin >> temp;
            av.push_back(temp);
        }
        sort(av.begin(), av.end(), greater<int>());
        for(int i=0; i<n-1; i++) {
            cout << av[i] << " ";
        }
        cout << av[n-1] << "\n";
    }
}
