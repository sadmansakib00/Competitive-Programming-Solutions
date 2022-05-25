class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,lastDup=-1;
        int lastPos[s.length()];
        map<char, int> cur;
        for(int i=0; i<s.length(); i++) {
            if(cur[s[i]]==0) {
                cur[s[i]] = i+1;
                lastPos[i] = 0;
            } else {
                lastPos[i] = cur[s[i]]-1;
                if(lastDup<lastPos[i]) lastDup = lastPos[i];
                cur[s[i]] = i+1;
            }
            if(i-lastDup>ans) ans=i-lastDup;
            //cout << "lastDup = " << lastDup << " i = " << i << "\n";
            //cout << "ans = " << ans << "\n";
        }
        return ans;
    }
};
