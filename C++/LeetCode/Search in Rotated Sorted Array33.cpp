class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1, mid, pivot=-1;
        if(nums.size()==1) pivot = nums.size()-1;
        else if(nums[0]<nums[nums.size()-1]) pivot = nums.size()-1;
        else {
            while(lo<=hi) {
                mid = lo+(hi-lo)/2;
                if(nums[mid]>nums[mid+1]) {
                    pivot = mid;
                    break;
                } else if(nums[lo]>nums[mid]) {
                    hi = mid-1;
                } else {
                    lo = mid+1;
                }
            }
        }
        if(pivot==nums.size()-1) lo=0, hi=nums.size()-1;
        else if(target>=nums[0] && target<=nums[pivot]) lo=0, hi=pivot;
        else lo=pivot+1, hi=nums.size()-1;

        while(lo<=hi) {
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]) {
                hi=mid-1;
            } else {
                lo=mid+1;
            }
        }
        return -1;
    }
};
