class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        int loPos = 0;
        for(int i=0; i<nums1.size(); i++) {
            int lo=loPos, hi=nums2.size()-1, mid, till = -1;
            while(lo<=hi) {
                mid = lo+(hi-lo)/2;
                if(nums2[mid]<=nums1[i]) {
                    till = mid;
                    lo = mid+1;
                } else {
                    hi = mid-1;
                }
            }

            for(int j=loPos; j<=till; j++) {
                temp.push_back(nums2[j]);
            }
            temp.push_back(nums1[i]);
            if(till!=-1) loPos = till+1;
        }
        for(; loPos<nums2.size(); loPos++) temp.push_back(nums2[loPos]);

        if(temp.size()%2==0) {
            return (double)(temp[temp.size()/2]+temp[temp.size()/2-1])/2;
        } else {
            return temp[temp.size()/2];
        }
    }
};
