class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>maxarr(n);
        vector<int>minarr(n);
        int maxi= nums[0];
            for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);
            maxarr[i] = maxi;
        }
        int mini=nums[n-1];
        for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            minarr[i] = mini;
        }
        for (int i = 0; i < n; i++) {
            if (maxarr[i] - minarr[i] <= k)
                return i;
        }
        return -1;
    }
};

