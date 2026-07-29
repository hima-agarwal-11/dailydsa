class Solution {
public:
static const int MOD = 1000000007;
bool prime(int n ){
    if(n<2)
    return false;
    for (int i = 2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
 int countprime(int n ){
    int cnt=0;
    for(int i =n;i>1;i--){
    if(prime(i))
    cnt++;
    }
    return cnt;
 }

long long factorial(int n ){
    long long fac=1;
    while(n>0){
    fac=(n*fac)%MOD;
    n--;
    }
    return fac;

 }
    int numPrimeArrangements(int n) {
        int p = countprime(n);

        return (factorial(p)*factorial(n-p))%MOD;
    }
};
