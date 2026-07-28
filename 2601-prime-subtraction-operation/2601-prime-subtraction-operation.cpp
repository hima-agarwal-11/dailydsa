class Solution {
public:
bool isPrime(int n){
    if (n<2)
    return false;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
     return true;
}
int prime(int curr,int next ){
    int diff=curr-next;
    for(int p =diff+1;p<curr;p++)
    {if(isPrime(p))
    return p;
}
return -1;
}
    bool primeSubOperation(vector<int>& nums) {
       for(int i =nums.size()-2;i>=0;i--){
        if(nums[i]<nums[i+1])
        continue;
        int p = prime(nums[i],nums[i+1]);
        if(p==-1)
        return false;
        nums[i]-=p;
        if(nums[i]>=nums[i+1])
        return false;
        }
        return true;
        }
};