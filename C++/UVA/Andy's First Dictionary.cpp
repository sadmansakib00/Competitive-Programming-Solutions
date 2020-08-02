#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    string word;
    map<string,int> aMap;
    map<string,int>::iterator it;
    //regex reg("[^a-z]*");
    while(cin >> word) {
        transform(word.begin(),word.end(),word.begin(),::tolower);
        replace_if(word.begin(),word.end(), ::isdigit, ' ');
        replace_if(word.begin(),word.end(), ::ispunct, ' ');
        //cout << "Actual word = " << word << "\n";
        stringstream ss(word);
        while(ss >> word) {
            aMap.insert(pair<string,int>(word,0));
        }

    /*
        **I couldn't make this work**
        stringstream ss;
        regex_replace(ostream_iterator<char>(ss), word.begin(),word.end(),reg," ");
            word = ss.str();
            //cout << "RegEx word = " << word << "\n";

    */
    }
    for(it=aMap.begin(); it!=aMap.end(); it++) {
        cout << it->first << "\n";
    }
}
