class Solution {
public:
    int subtractProductAndSum(int n) {
        int num=n;
        int pro=1;
        int sum=0;
        while(num>0){
            pro=pro*(num%10);
            sum=sum+(num%10);
            num=num/10;
        }
        return pro-sum;
    }
};