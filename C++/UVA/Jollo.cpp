#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void justify(bool marker[], int temp)
{
    for(;;) {
        ++temp;
        if(marker[temp])
            continue;
        else
            break;
    }
    if(temp>52) {
        printf("-1\n");
    }
    else {
        printf("%d\n",temp);
    }
}
int main() {
    int cards[5];
    while(true) {
        bool marker[54] {false};
        bool flag = true;
        for(int m=0; m<5; m++) {
            scanf("%d",&cards[m]);
            marker[cards[m]]=true;
            if(cards[m]!=0)
                flag = false;
        }
        if(flag)
            break;
        sort(cards,cards+3);
        int card1,card2;
        card1 = card2 = 0;
        for(int m=0; m<3; m++) {
            if(cards[3]>cards[m])
                ++card1;
            if(cards[4]>cards[m]) {
                ++card2;
            }
        }
        if((card1==0 && card2<3) || (card1<3 && card2==0)) {
            printf("-1\n");
            continue;
        } else if((card1==3 && card2==2) || (card1==2 && card2==3)) {
            justify(marker,cards[1]);
            continue;
        } else if((card1==1 && card2==3) || (card1==3 && card2==1)) {
            justify(marker,cards[2]);
            continue;
        } else if(card1==2 && card2==2) {
            justify(marker,cards[1]);
            continue;
        } else if((card1==0 && card2==3) || (card1==3 && card2==0)) {
            justify(marker,cards[2]);
            continue;
        } else if(card1==3 && card2==3) {
            justify(marker,0);
            continue;
        }
        else
            printf("-1\n");
    }
}
