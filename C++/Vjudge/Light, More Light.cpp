#include <bits/stdc++.h>
using namespace std;
int main() {
    long value;
    scanf("%d",&value);
    while(value != 0) {
        if(value==1) {
            printf("yes\n");
            scanf("%d",&value);
            continue;
        }
        if(value%4==0)
            printf("yes\n");
        else
            printf("no\n");
        scanf("%d",&value);
    }
}
