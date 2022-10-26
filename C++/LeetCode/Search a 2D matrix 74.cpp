class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0; i<matrix.size(); i++) {
            if(matrix[i][matrix[0].size()-1]>=target) {
                int loC = 0, hiC=matrix[0].size()-1;
                while(loC<=hiC) {
                    int mid = loC+(hiC-loC)/2;
                    if(matrix[i][mid]<target) {
                        loC = mid+1;
                    } else if(matrix[i][mid]>target) {
                        hiC = mid-1;
                    } else {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
