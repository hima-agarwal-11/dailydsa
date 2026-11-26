
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int freq[20001]={0};
        for(int x:nums){
            freq[x+10000]++;
        }
        int sum=0;
        bool take=true;
        for(int i =0;i<20001;i++){
            while(freq[i]>0){
            if(take)
            sum+=i-10000;
            take=!take;
            freq[i]--;
        }
    }
        return sum;
        // sort(nums.begin(), nums.end());

        // int sum = 0;

        // for(int i = 0; i < nums.size(); i += 2) {
        //     sum += nums[i];
        // }

        // return sum;
    }
};
