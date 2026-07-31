class Solution {
public:
bool isprime(int n ){
    if(n<2)
    return false;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int makepalindrome(int x ){
int ans = x;
x=x/10;
while(x>0){
    ans=ans*10+x%10;
    x/=10;
}
return ans;
} 
      int primePalindrome(int n) {
        if(8<=n && n<=11)
        return 11;

        for (int i = 1;; i++){
            int p=makepalindrome(i);
            if (p>=n && isprime(p))
                    return p;
        }
        return -1;
    }
};

 