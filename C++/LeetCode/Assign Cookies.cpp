class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int ans = 0;
        sort(g.begin(), g.end(), greater<int>());
        sort(s.begin(), s.end(), greater<int>());
        int i=0, j=0;
        for(; i<g.size(); i++) {
            if(j == s.size()) break;
            if(g[i]<=s[j]) {
                ans++;
                j++;
            }
        }
        return ans;
    }
};
