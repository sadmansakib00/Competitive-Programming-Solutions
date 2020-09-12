#include <bits/stdc++.h>
using namespace std;

int main() {
    int buttons,buttonState;
    cin >> buttons;
    bool flag = false;
    for(int m=0; m<buttons; m++) {
        cin >> buttonState;
        if(buttons==1 && buttonState==1) {
            flag = true;
        } else if(buttons>1) {
            if(buttonState==0 && !flag)
                flag = true;
            else if(buttonState==0 && flag) {
                flag = false;
                break;
            }
        }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
