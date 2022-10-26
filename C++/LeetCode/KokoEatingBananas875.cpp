class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long long int lo=1, hi=1000000000, mid, ans=-1;
        while(lo<=hi) {
            mid = lo+(hi-lo)/2;
            long long int flag = 1, hoursNeeded = 0;
            for(int i=0; i<piles.size(); i++) {
                hoursNeeded += piles[i]/mid;
                if(piles[i]%mid!=0) hoursNeeded++;
            }
            if(hoursNeeded<=h) {
                ans = mid;
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        return ans;
    }
};
