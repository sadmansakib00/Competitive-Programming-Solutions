#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int peeps,budget,hotels,weeks,hotelPrice,vacancy,expenditure,temp;
    bool flag;
    while(cin >> peeps) {
        cin >> budget >> hotels >> weeks;
        expenditure = 0;
        for(int m=0; m<hotels; m++) {
            cin >> hotelPrice;
            flag = true;
            for(int n=0; n<weeks; n++) {
                cin >> vacancy;
                if(flag && vacancy >= peeps) {
                    flag = false;
                    temp = hotelPrice*peeps;
                    if(expenditure==0) {
                        expenditure = temp;
                    }
                    expenditure = expenditure>temp ? temp : expenditure;
                }
            }
        }
        if(expenditure <= budget && expenditure>0)
            cout << expenditure << "\n";
        else
            cout << "stay home\n";
    }
}
