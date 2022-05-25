class Solution {
public:
    int romanToInt(string s) {
        long long int ans = 0;
        unordered_map<string,int> mp;
        mp["I"]=1, mp["V"]=5, mp["X"]=10, mp["L"]=50, mp["C"]=100, mp["D"]=500, mp["M"]=1000;
        mp["IV"]=4, mp["IX"]=9, mp["XL"]=40, mp["XC"]=90, mp["CD"]=400, mp["CM"]=900;
        for(int i=0; i<s.length(); i++) {
            string temp = string(1,s[i])+s[i+1];
            if(i < s.length()-1 && mp[temp] != 0) {
                ans += mp[temp];
                i++;
            } else {
                ans += mp[string(1,s[i])];
            }
        }
        return ans;
    }
};
