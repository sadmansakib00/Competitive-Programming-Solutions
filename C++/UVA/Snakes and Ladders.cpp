#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int tests;
    scanf("%d",&tests);
    while(tests-- >0)
    {
        int players,snakesOrLadders,dieRolls;
        scanf("%d %d %d",&players, &snakesOrLadders, &dieRolls);
        int pos[snakesOrLadders][2];
        for(int m=0; m<snakesOrLadders; m++)
        {
            cin >> pos[m][0] >> pos[m][1];
        }
        int rolls[dieRolls];
        for(int m=0; m<dieRolls; m++)
            scanf("%d",&rolls[m]);
        int pArr[players];
        for(int m=0; m<players; m++)
            pArr[m]=1;
        for(int n=0,m=0; n<dieRolls; n++,m++)
        {
            if(m==players)
                m=0;
            pArr[m]+=rolls[n];
            for(int p=0; p<snakesOrLadders; p++)
            {
                if(pos[p][0]==pArr[m])
                {
                    pArr[m]=pos[p][1];
                    break;
                }
            }
            if(pArr[m]>=100) {
                pArr[m]=100;
                break;
            }
        }
        for(int m=0; m<players; m++)
            cout << "Position of player "<<m+1<<" is "<<pArr[m]<<"."<<endl;
    }
}

