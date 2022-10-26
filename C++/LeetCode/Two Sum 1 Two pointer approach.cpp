class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, vector<int>> aMap;
        for(int i=0; i<nums.size(); i++) aMap[nums[i]].push_back(i);
        int l=0, r=nums.size()-1;
        sort(nums.begin(), nums.end());
        while(l<r) {
            //cout << "l = " << l << " r = " << r << "\n";
            if(nums[l]+nums[r]==target) {
                if(nums[l]==nums[r]) return {aMap[nums[l]][0], aMap[nums[l]][1]};
                return {aMap[nums[l]][0], aMap[nums[r]][0]};
            } else if(nums[l]+nums[r]<target) {
                l++;
            } else {
                r--;
            }
        }
        return {-1,-1};
    }
};
