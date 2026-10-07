class Solution {
public:
int digsum(int n ){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }return sum;
}
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        int digisum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
            digisum+=digsum(nums[i]);

        }return abs(elesum-digisum);
    }
};