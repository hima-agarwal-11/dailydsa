class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n = nums.size();
        for(int i = 0 ;i<n;i++){
            sum+=abs(nums[i]-nums[n/2]);
        }return sum ;

    }
};
