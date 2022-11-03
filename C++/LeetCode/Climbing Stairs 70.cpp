class Solution {
public:
    int cnt[46];
    int climbStairs(int n) {
        if(n<=1) return 1;
        if(cnt[n] != 0) return cnt[n];
        cnt[n] = climbStairs(n-1)+climbStairs(n-2);
        return cnt[n];
    }
};
