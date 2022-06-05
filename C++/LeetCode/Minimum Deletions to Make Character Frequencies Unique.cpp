class Solution {
public:
    int minDeletions(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr); cout.tie(nullptr);
        int freq[26], ans=0;
        map<int, int> mp;
        memset(freq,0,sizeof(freq));
        for(int i=0; i<s.length(); i++) {
            freq[s[i]-'a']++;
        }
        for(int i=0; i<26; i++) {
            if(freq[i]>0) mp[freq[i]]++;
        }
        for(int i=0; i<26; i++) {
            if(freq[i]>0 && mp[freq[i]]>1) {
                //cout << "freq = " << freq[i] << " mp[freq] = " << mp[freq[i]] << "\n";
                int temp = freq[i];
                while(mp[temp] != 0 && temp > 0) {
                    temp--;
                    ans++;
                    //cout << "temp = " << temp << " ans = " << ans << "\n";
                }
                mp[freq[i]]--;
                mp[temp] = 1;
            }
        }

        return ans;
    }
};
