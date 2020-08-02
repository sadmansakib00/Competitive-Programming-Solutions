#include <bits/stdc++.h>
using namespace std;
int main() {
    int tests, a1,a2,a3, c1,c2,c3;
    bool flag;
    cin >> tests;
    while(tests-- > 0) {
        cin >> a1 >> a2 >> a3 >> c1 >> c2 >> c3;
        flag = false;
        if(a1==a2 && a2==a3) {
            if(c1==c2 && c2==c3)
                flag = true;
        } else if(a1==a2 && a1 != a3) {
            if(a1<a3) {
                if(c1==c2 && c1<c3)
                    flag = true;
            } else {
                if(c1==c2 && c1>c3)
                    flag = true;
            }
        } else if(a1==a3 && a1 != a2) {
            if(a1<a2) {
                if(c1==c3 && c1<c2)
                    flag = true;
            } else {
                if(c1==c3 && c1>c2)
                    flag = true;
            }
        } else if(a2==a3 && a1 != a2) {
            if(a1<a2) {
                if(c2==c3 && c1<c2)
                    flag = true;
            } else {
                if(c2==c3 && c1>c2)
                    flag = true;
            }
        } else if(a1>a2 && a2>a3) {
            if(c1>c2 && c2>c3)
                flag = true;
        } else if(a1<a2 && a2<a3) {
            if(c1<c2 && c2<c3)
                flag = true;
        } else if(a1>a2 && a2<a3) {
            if(a1>a3) {
                if(c1>c2 && c2<c3 && c1>c3)
                    flag = true;
            } else {
                if(c1>c2 && c2<c3 && c1<c3)
                    flag = true;
            }
        } else if(a1<a2 && a2>a3) {
            if(a1>a3) {
                if(c1<c2 && c2>c3 && c1>c3)
                    flag = true;
            } else {
                if(c1<c2 && c2>c3 && c1<c3)
                    flag = true;
            }
        } else if(a1>a3 && a2>a3) {
            if(a1>a2) {
                if(c1>c3 && c2>c3 && c1>c2)
                    flag = true;
            } else {
                if(c1>c3 && c2>c3 && c1>c2)
                    flag = true;
            }
        } else if(a1>a3 && a2<a3) {
            if(c1>c3 && c2<c3)
                flag = true;
        } else if(a1<a3 && a2>a3) {
            if(c1>c3 && c2<c3)
                flag = true;
        } else if(a1<a3 && a2<a3) {
            if(a1>a2) {
                if(c1<c3 && c2<c3 && c1>c2)
                    flag = true;
            } else {
                if(c1<c3 && c2<c3 && c1>c2)
                    flag = true;
            }
        }
        if(flag)
            cout << "FAIR\n";
        else
            cout << "NOT FAIR\n";
    }
}
