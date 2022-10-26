class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1, mid;
        bool flag = 0;
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            if(target<nums[mid]) {
                hi = mid-1;
            } else if(target>nums[mid]) {
                lo = mid+1;
            } else {
                flag = 1;
                break;
            }
        }
        return flag ? mid : -1;
    }
};
