class Solution {
public:
    bool hasAlternatingBits(int n) {
        int r = n&1;
        n=n>>1;
        while(n>0){
            int next = n&1;

        if ((r ^ next) == 0)
                return false;

            r = next;
            n >>= 1;
        }

        return true;
    }
};

      