class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++) {
            if(s.count(nums[i])!=0) {
                return 1;
            } else {
                s.insert(nums[i]);
            }
        }
        return 0;
    }
};
