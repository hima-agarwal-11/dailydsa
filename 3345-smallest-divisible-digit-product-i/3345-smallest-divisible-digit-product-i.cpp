class Solution {
public:
int prodofdigits(int n ){
    int pro=1;
    while(n>0){
        pro=pro*(n%10);
        n=n/10;
    }
    return pro;

}

    int smallestNumber(int n, int t) {
        for(int i =n;;i++){
            if(prodofdigits(i)%t==0)
            return i;
        }return -1;
    }
};


   