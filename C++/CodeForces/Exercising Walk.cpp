#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t,r,l,u,d,x,y,x1,y1,x2,y2;
    cin >> t;
    while(t-- > 0) {
        cin >> l >> r >> d >> u;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        if(x1 == y1 && y1 == x2 && x2 == y2) {
            if(l!=0 || r!=0 || d!=0 || u!=0) {
                cout << "NO\n";
                continue;
            }
        } else if(x1 == x2) {
            if(l!=0 || r!=0) {
                cout << "NO\n";
                continue;
            } else {
                if(y1 == y2) {
                    if(d!=0 || u!=0) {
                        cout << "NO\n";
                        continue;
                    }
                } else {
                    if(d>u) {
                        if(y-y1>=d-u) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    } else {
                        if(y2-y>=u-d) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    }
                }
            }
        } else if(y1 == y2) {
            if(d!=0 || u!=0) {
                cout << "NO\n";
            } else {
                if(l>r) {
                    if(x-x1>=l-r) {
                        cout << "YES\n";
                    } else {
                        cout << "NO\n";
                    }
                } else {
                    if(x2-x>=r-l) {
                        cout << "YES\n";
                    } else {
                        cout << "NO\n";
                    }
                }
            }
        } else {
            if(l>r) {
                if(x-x1>=l-r) {
                    if(d>u) {
                        if(y-y1>=d-u) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    } else {
                        if(y2-y>=u-d) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    }
                } else {
                    cout << "NO\n";
                }
            } else {
                if(x2-x>=r-l) {
                    if(d>u) {
                        if(y-y1>=d-u) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    } else {
                        if(y2-y>=u-d) {
                            cout << "YES\n";
                        } else {
                            cout << "NO\n";
                        }
                    }
                } else {
                    cout << "NO\n";
                }
            }
        }
    }
}
