class Solution {
public:
    int countLargestGroup(int n) {
        int freq[37]={0};
        for(int i =1;i<=n;i++){
            int num=i;
            int sum=0;
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            freq[sum]++;
        }
            int maxi=0;
            for(int i =1;i<=36;i++){
                maxi=max(maxi,freq[i]);
            }
            int ans=0;
            for(int i =1;i<=36;i++){
                if(freq[i]==maxi){
                    ans++;
                }
            }return ans;

        
    }
};

