class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> aMap;
        map<char, int>::iterator it;
        for(int i=0; i<s.length(); i++)   aMap[s[i]]++;
        for(int i=0; i<t.length(); i++) {
            if(aMap[t[i]] > 0) aMap[t[i]]--;
            else return 0;
        }
        return s.length()==t.length() ? 1 : 0;
    }
};
