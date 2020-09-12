#include <bits/stdc++.h>
using namespace std;
class CheatingAfterTests {
    public:
        int cheat(vector<int> report) {
            int maxDif = -1, maxDifPos = -1, total = 0;
            for(int i=0; i<report.size(); i++) {
                if(report[i]<10) {
                    if(9-report[i]>maxDif) {
                     	maxDif = 9-report[i];
                        maxDifPos = i;
                    }
                } else if (report[i]<90){
                    string aStr = to_string(report[i]);
                 	int temp = 90+(aStr[1]-'0');
                    if(temp-report[i]>maxDif) {
                      maxDif = temp-report[i];
                        maxDifPos = i;
                    }
                } else {
                    if(99-report[i]>maxDif) {
                		maxDif = 99-report[i];
                    	maxDifPos = i;
                    }
                }
            }
            for(int i=0; i<report.size(); i++) {
                if(i==maxDifPos) {
                    if(report[i]<10) {
                     total += 9;
                    } else if(report[i]<90) {
                        string temp = to_string(report[i]);
                     total += 90+(temp[1]-'0');
                    } else {
                    	total += 99;
                    }
                } else {
                    total += report[i];
                }
            }
            return total;
        }
};
