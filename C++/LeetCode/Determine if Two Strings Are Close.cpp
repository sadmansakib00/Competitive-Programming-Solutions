class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size() != word2.size()) return false;
        map<char, int> mapOne;
        map<char, int> mapTwo;
        map<char, int>::iterator it;
        vector<int> vOne;
        vector<int> vTwo;
        for(int i=0; i<word1.size(); i++) {
            mapOne[word1[i]]++;
        }
        for(int i=0; i<word2.size(); i++) {
            if(mapOne[word2[i]] == 0) return false;
            mapTwo[word2[i]]++;
        }
        for(it=mapOne.begin(); it!=mapOne.end(); it++) {
            vOne.push_back(it->second);
        }
        for(it=mapTwo.begin(); it!=mapTwo.end(); it++) {
            vTwo.push_back(it->second);
        }
        sort(vOne.begin(), vOne.end());
        sort(vTwo.begin(), vTwo.end());
        for(int i=0; i<vOne.size(); i++) {
            if(vOne[i] != vTwo[i]) return false;
        }
        return true;
    }
};
