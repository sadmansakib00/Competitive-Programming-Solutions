#include <bits/stdc++.h>
using namespace std;

int main() {
    int opponents(0),days(0),winningDays(0),finalAns(0);
    cin >> opponents >> days;
    string schedule[days];
    for(int m=0; m<days; m++) {
        cin >> schedule[m];
        bool flag = false;
        for(int n=0; n<opponents; n++) {
            if(schedule[m].at(n) == '0')
                flag = true;
        }
        if(flag) {
            winningDays++;
            finalAns = max(winningDays, finalAns);
        } else {
            winningDays=0;
        }
    }
    cout<<finalAns<<endl;
}
