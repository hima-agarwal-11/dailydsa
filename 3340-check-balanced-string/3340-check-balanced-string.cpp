class Solution {
public:
    bool isBalanced(string num) {
        int evensum=0,oddsum=0;
        for(int i = 0 ;i<num.length();i+=2){
            evensum+=(num[i]-'0');
        }
        for(int i = 1;i<num.length();i+=2){
            oddsum+=(num[i]-'0');
        }return oddsum==evensum;
    }
};