class Solution {
public:
    bool canAliceWin(int n) {
        int d=10;
        bool ans=true;
        while(n>=d){
            n-=d;
            d--;
            ans=!ans;
            }
        return !ans;
    }
};
