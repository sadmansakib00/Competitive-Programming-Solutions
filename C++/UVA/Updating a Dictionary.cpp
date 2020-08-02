#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    string aStr,key,value;
    cin >> t;
    while(t-- > 0) {
        map<string,string> firstDic;
        map<string,string>::iterator oldIt;
        map<string,string> secDic;
        map<string,string>::iterator newIt;
        map<string,int> added;
        map<string,int> removed;
        map<string,int> changedVal;
        map<string,int>::iterator anIt;
        for(int i : {1,2}) {
            cin >> aStr;
            aStr.erase(0,1);
            aStr.erase(aStr.length()-1,aStr.length());
            size_t pos = 0;
            //cout << aStr << "\n";
            while((pos = aStr.find(":")) != string::npos) {
                key = aStr.substr(0,pos);
                if(key[0]==',') {
                    key.erase(0,1);
                }
                aStr.erase(0,pos+1);
                pos = aStr.find(",");
                value = aStr.substr(0,pos);
                aStr.erase(0,pos);
                if(i==1) {
                    firstDic.insert(pair<string,string>(key,value));
                } else {
                    secDic.insert(pair<string,string>(key,value));
                }
                //cout << "key = " << key << "  &  pos = " << value << "\n";
            }
        }
        for(newIt=secDic.begin(); newIt!=secDic.end(); newIt++) {
            oldIt=firstDic.find(newIt->first);
            if(oldIt == firstDic.end()) {
                added.insert(pair<string,int>(newIt->first,0));
            } else {
                if(newIt->second != oldIt->second) {
                    changedVal.insert(pair<string,int>(newIt->first,0));
                }
                firstDic.erase(newIt->first);
            }
        }
        for(oldIt=firstDic.begin(); oldIt!=firstDic.end(); oldIt++) {
            removed.insert(pair<string,int>(oldIt->first,0));
        }
        if(added.size()==0 && removed.size()==0 && changedVal.size()==0) {
            cout << "No changes\n";
        }
        if(added.size()!=0) {
            anIt = added.begin();
            cout << "+" << anIt->first;
            anIt++;
            for(; anIt!=added.end(); anIt++) {
                cout << "," << anIt->first;
            }
            cout << "\n";
        }
        if(removed.size()!=0) {
            anIt = removed.begin();
            cout << "-" << anIt->first;
            anIt++;
            for(; anIt!=removed.end(); anIt++) {
                cout << "," << anIt->first;
            }
            cout << "\n";
        }
        if(changedVal.size()!=0) {
            anIt = changedVal.begin();
            cout << "*" << anIt->first;
            anIt++;
            for(; anIt!=changedVal.end(); anIt++) {
                cout << "," << anIt->first;
            }
            cout << "\n";
        }
        cout << "\n";
    }
}
