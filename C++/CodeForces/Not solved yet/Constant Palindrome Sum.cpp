#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k;
    bool flag;
    cin >> t;
    while(t-- > 0) {
        cin >> n >> k;
        ll maxx = INT_MIN, maxVal = 0, ans = 0;
        ll anArr[n];
        map<int,int> aMap;
        for(int i=0; i<n; i++)  cin >> anArr[i];
        for(int i=0; i<n/2; i++) {
            aMap[anArr[i]+anArr[n-i-1]]++;
            if(aMap[anArr[i]+anArr[n-i-1]]>maxx) {
                maxx = aMap[anArr[i]+anArr[n-i-1]];
                maxVal = anArr[i]+anArr[n-i-1];
            }
        }

        ll mean,tempAns=0,total=0;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = tempAns;
        tempAns = 0;
        maxVal = maxVal+1;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        tempAns = 0;
        maxVal = maxVal-2;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);

        vector<int> v;
        for(int i=0; i<n/2; i++) {
            total += (anArr[i]+anArr[n-i-1]);
            v.push_back(anArr[i]+anArr[n-i-1]);
        }
        //Now with mean
        mean = total/(n/2);
        maxVal = mean;
        tempAns = 0;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        tempAns = 0;
        maxVal = mean+1;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        tempAns = 0;
        maxVal = mean-1;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);

        //Now with median
        sort(v.begin(),v.end());
        if(v.size()%2==0) {
            mean = (v[v.size()/2]+v[v.size()/2-1])/2;
        } else {
            mean = v[v.size()/2];
        }
        maxVal = mean;
        tempAns = 0;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        tempAns = 0;
        maxVal = mean+1;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        tempAns = 0;
        maxVal = mean-1;
        for(int i=0; i<n/2; i++) {
            ll temp = anArr[i]+anArr[n-i-1];
            if(temp < maxVal) {
                ll dif = maxVal-temp;
                if(k-anArr[i]<dif && k-anArr[n-i-1]<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            } else if(temp > maxVal) {
                ll dif = temp-maxVal;
                if(anArr[i]-1<dif && anArr[n-i-1]-1<dif) {
                    tempAns += 2;
                } else {
                    tempAns += 1;
                }
            }
        }
        ans = min(ans,tempAns);
        cout << ans << "\n";
    }
}
