#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int t,n,m,num;
    string command;
    cin >> t;
    for(int i=1; i<=t; i++) {
        cout << "Case " << i << ":\n";
        cin >> n >> m;
        deque<int> aDeque;
        for(int j=0; j<m; j++) {
            cin >> command;
            if(command == "pushLeft" || command == "pushRight") {
                cin >> num;
                if(aDeque.size()==n) {
                    cout << "The queue is full\n";
                } else {
                    if(command == "pushLeft") {
                        aDeque.push_front(num);
                        cout << "Pushed in left: " << num << "\n";
                    } else {
                        aDeque.push_back(num);
                        cout << "Pushed in right: " << num << "\n";
                    }
                }
            } else {
                if(aDeque.size()==0) {
                    cout << "The queue is empty\n";
                } else {
                    if(command == "popLeft") {
                        cout << "Popped from left: " << aDeque.front() << "\n";
                        aDeque.pop_front();
                    } else {
                        cout << "Popped from right: " << aDeque.back() << "\n";
                        aDeque.pop_back();
                    }
                }
            }
        }

    }
}
