class Solution {
public:
    int pivotInteger(int n) {
        int total=n*(n+1)/2;
        int x= sqrt(total);
        if(x*x==total)
        return x;
        return -1;
        // int total=n*(n+1)/2;
        // int l = 1;
        // int lsum = 0;
        // while(l<=n){
        // lsum+=l;
        // int rsum=total-lsum+l;
        // if(lsum==rsum)
        // return l ;
        // l++;
        // }
        // return -1;
    }
};

