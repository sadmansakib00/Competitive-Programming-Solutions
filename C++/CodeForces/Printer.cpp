#include<bits/stdc++.h>
using namespace std;
#define horsePower ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int

int main() {
	horsePower;
    ll n,k,tOne=0,tTwo=0,oneCount=1,twoCount=1,temp = 0;
    string fOne,fTwo;
    cin >> n >> k >> fTwo >> fOne;
    for(int i=n-1; i>-1; i--) {
        if(fTwo[i] == '1') {
            tTwo = i+1;
            break;
        }
    }
    for(int i=n-1; i>-1; i--) {
        if(fOne[i] == '1') {
            tOne = i+1;
            break;
        }
    }
    if(tTwo==0 || tOne==0) {
        if(tOne != 0) {
            int tFirst = 0;
            for(int i=0; i<n; i++) {
                if(fOne[i] == '1') {
                    tFirst = i;
                    break;
                }
            }
            if(tOne == tFirst) {
                cout << 0 << "\n";
                cout << 1 << " " << tOne << "\n";
            } else {
                if((tOne-tFirst)%2==0) {
                    cout << (tOne-tFirst)/2 +1 << "\n";
                    cout << 1 << " " << tFirst + (tOne-tFirst)/2 << "\n";
                } else {
                    cout << (tOne-tFirst)/2 + 2 << "\n";
                    cout << 1 << " " << tFirst + (tOne-tFirst)/2 << "\n";
                }
            }
        } else {
            int tSec = 0;
            for(int i=0; i<n; i++) {
                if(fTwo[i] == '1') {
                    tSec = i;
                    break;
                }
            }
            if(tSec == tTwo) {
                cout << 0 << "\n";
                cout << 2 << " " << tTwo << "\n";
            } else {
                if((tTwo-tSec)%2==0) {
                    cout << (tTwo-tSec)/2 +1 << "\n";
                    cout << 2 << " " << tSec + (tTwo-tSec)/2 << "\n";
                } else {
                    cout << (tTwo-tSec)/2+2 << "\n";
                    cout << 2 << " " << tSec + (tTwo-tSec)/2 << "\n";
                }
            }
        }
    } else if(tTwo == tOne) {
        cout << 1+tOne+k << "\n";
        cout << "1 1\n";
    }
    else {
        if(tOne<tTwo) {
            if(tOne+k>=tTwo) {
                temp = 1;
                cout << tOne+k+temp << "\n";
                cout << 2 << " " << temp << "\n";
            } else {
                temp = tOne+k;
                while(tTwo>temp) {
                    //cout << "temp = " << temp << "  tTwo = " << tTwo << "\n";
                    temp++;
                    tTwo--;
                }
                cout << temp << "\n";
                cout << 2 << " " << temp - tOne - k << "\n";
            }
        } else {
            if(tTwo+k>=tOne) {
                temp = 1;
                cout << tTwo+k+temp << "\n";
                cout << 1 << " " << temp << "\n";
            } else {
                temp = tTwo + k;
                while(tOne > temp) {
                    //cout << "temp = " << temp << "  tTwo = " << tTwo << "\n";
                    temp++;
                    tOne--;
                }
                cout << temp << "\n";
                cout << 1 << " " << temp - tTwo - k << "\n";
            }
        }
    }
}
