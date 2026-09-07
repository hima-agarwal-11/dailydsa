class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int>ans;
        int evencnt=0;
        for(int i = 0 ;i<nums.size();i++){
            if(nums[i]%2==0)
            evencnt++;
        }
        for(int i = 0; i <nums.size();i++){
            if(i<evencnt)
            nums[i]=0;
            else 
            nums[i]=1;
        }
        return nums;
    }

};
