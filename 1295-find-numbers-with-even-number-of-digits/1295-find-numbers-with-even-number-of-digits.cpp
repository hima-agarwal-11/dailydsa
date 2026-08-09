class Solution {
public:
int countdigits(int num){
    int cnt=0;
    while(num>0){
        num/=10;
        cnt++;
    }
    return cnt;
}
    int findNumbers(vector<int>& nums) {
        int c=0;
        for(int i =0;i<nums.size();i++){
            if(countdigits(nums[i])%2==0)
            c++;
        }return c;
    }
};