class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> v;
        for(int i=0; i<strs.size(); i++) v.push_back({strs[i], strs[i]});
        for(int i=0; i<v.size(); i++)  sort(v[i].first.begin(), v[i].first.end());
        sort(v.begin(), v.end());
        vector<vector<string>> ans;
        vector<string> temp;
        string tempStr;
        for(int i=0; i<v.size(); i++) {
            if(temp.size()==0) {
                temp.push_back(v[i].second);
                tempStr = v[i].first;
            } else if(tempStr==v[i].first) {
                temp.push_back(v[i].second);
            } else {
                ans.push_back(temp);
                temp.clear();
                temp.push_back(v[i].second);
                tempStr = v[i].first;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
