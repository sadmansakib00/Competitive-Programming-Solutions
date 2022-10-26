class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo=0, hi=nums.size()-1, mid, pivot=-1;
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            int compWith = mid+1;
            if(mid==nums.size()-1) compWith = 0;
            if(nums[mid]>nums[compWith]) {
                pivot = compWith;
                break;
            } else if(nums[lo]<=nums[mid]) {
                lo = mid+1;
            } else {
                hi = mid-1;
            }
        }
        return pivot==-1 ? nums[0] : nums[pivot];
    }
};
