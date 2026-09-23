
class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int total=0;
        for(int num:nums){
            total+=num;
        }int target=total-x;
        if(target==0)
        return n ;
        int  l = 0 ;int sum =0 ;
        int maxlen=-1;
        for(int r=0;r<n;r++){
            sum+=nums[r];
            while(l<=r &&sum>target){
                sum-=nums[l];
                l++;
            }
            if(sum==target){
                maxlen=max(maxlen,r-l+1);
            }
        }
        if(maxlen==-1)
        return -1;
        return n - maxlen;

    }
};
