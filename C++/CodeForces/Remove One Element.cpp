#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    int n,maxStreak=0,maxStreakTwo=0,curStreak=0,secPortion=0;
    bool flag=true,firstTime=false;
    cin >> n;
    int anArr[n];
    for(int i=0; i<n; i++) {
        cin >> anArr[i];
        if(i==0) {
            curStreak++;
        } else {
            if(flag) {
                if(anArr[i]>anArr[i-1]) {
                    curStreak++;
                } else {
                    flag = false;
                    firstTime = true;
                    secPortion=1;
                }
            } else {
                if(firstTime) {
                    firstTime = false;
                    if(anArr[i]>anArr[i-1]) secPortion++;
                    if(anArr[i]>anArr[i-2]) {
                        curStreak++;
                    } else {
                        maxStreak = max(maxStreak,curStreak);
                        curStreak = secPortion;
                        flag = true;
                    }
                } else {
                    if(anArr[i]>anArr[i-1]) {
                        secPortion++;
                        curStreak++;
                    } else {
                        maxStreak = max(maxStreak,curStreak);
                        curStreak = secPortion;
                        secPortion = 1;
                        firstTime = true;
                    }
                }
            }
        }
        //cout << "anArr[" << i << "] = " << anArr[i] << " and curStreak = " << curStreak << "\n";
    }
    maxStreak = max(maxStreak,curStreak);
    //cout << "maxStreak = " << maxStreak << "\n";
    curStreak=0,secPortion=0;
    for(int i=0; i<n; i++) {
        if(i==0) {
            curStreak++;
        } else if(i==1) {
            if(anArr[i]>anArr[i-1]) {
                curStreak++;
            } else {
                flag = false;
            }
        } else {
            if(flag) {
                if(anArr[i]>anArr[i-1]) {
                    curStreak++;
                } else {
                    if(anArr[i]>anArr[i-2]) {
                        flag = false;
                        secPortion=1;
                    } else {
                        flag = true;
                        maxStreakTwo = max(maxStreakTwo,curStreak);
                        curStreak=1;
                    }
                }
            } else {
                if(anArr[i]>anArr[i-1]) {
                    curStreak++;
                    secPortion++;
                } else {
                    maxStreakTwo = max(maxStreakTwo,curStreak);
                    if(anArr[i]>anArr[i-2]) {
                        curStreak = secPortion;
                        secPortion = 1;
                    } else {
                        flag = true;
                        curStreak=1;
                    }
                }
            }
        }
    }
    maxStreakTwo = max(maxStreakTwo,curStreak);
    //cout << "maxStreakTwo = " << maxStreakTwo << "\n";
    maxStreak = max(maxStreak,maxStreakTwo);
    cout << maxStreak << "\n";
}
