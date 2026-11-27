class Solution {
public:

    int countDigits(int num) {
        int n= num;
        int cnt=0;
        int digit;
        while(n>0){
            digit=n%10;
            n=n/10;
            if(num%digit==0)
            cnt++;
        }
return cnt;
    }
};