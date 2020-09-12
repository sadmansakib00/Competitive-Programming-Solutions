class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> aMap;
        unordered_map<int,int>::iterator it;
        for(int i=0; i<nums.size(); i++) {
            aMap.insert({nums[i],i});
        }
        for(int i=0; i<nums.size(); i++) {
            it = aMap.find(target-nums[i]);
            if(it != aMap.end() && it->second != i) {
                return {i,it->second};
            }
        }
        return {-1,-1};
    }
};
