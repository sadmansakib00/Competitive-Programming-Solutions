#include <bits/stdc++.h>
using namespace std;

int main() {
    int tests;
    cin >> tests;
    while(tests-- > 0) {
        int length;
        cin >> length;
        int cars[length];
        int incOrder[length];
        int decOrder[length];
        for(int m=0; m<length; m++)
            cin>>cars[m];
        //Increasing Order
        for(int m=length-1; m>=0; m--) {
            incOrder[m] = 1;
            for(int n=m+1; n<length; n++) {
                if(cars[n]>cars[m]) {
                    incOrder[m] = max(incOrder[n]+1, incOrder[m]);
                }
            }
        }


        //Decreasing Order
        for(int m=length-1; m>=0; m--) {
            decOrder[m] = 1;
            for(int n=m+1; n<length; n++) {
                if(cars[n]<cars[m]) {
                    decOrder[m] = max(decOrder[n]+1, decOrder[m]);
                }
            }
        }

        //Inspection
        /*for(int m=0; m<length; m++) {
        	cout<<"IncOrder["<<m<<"] = "<<incOrder[m]<<" ";
            cout<<"DecOrder["<<m<<"] = "<<decOrder[m]<<endl;
        }*/

        int maximum=1;
        for(int m=0; m<length; m++) {
            if(maximum<(incOrder[m]+decOrder[m]))
                maximum = incOrder[m]+decOrder[m];
        }
        cout<<maximum-1<<endl;
    }
}
