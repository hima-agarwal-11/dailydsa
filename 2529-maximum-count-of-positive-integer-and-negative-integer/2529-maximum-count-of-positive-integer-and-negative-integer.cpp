// class Solution {
// public:
//     int maximumCount(vector<int>& nums) {
//         int n = nums.size();
//         int zerocnt=0,negcnt=0,poscnt=0;
//         for(int i = 0 ;i<n;i++){
//             if(nums[i]<0)
//             negcnt++;
//             else if 
//             (nums[i]==0)
//             zerocnt++;
//             else
//             break;
//         }
//         poscnt=n-negcnt-zerocnt;
//         return max(negcnt,poscnt);
//     }
// };
class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int l = 0 , r= n-1 ;
        while(l<=r){
          int mid = l + (r - l) / 2;
            if(nums[mid]<0)
            l=mid+1;
            else
            r=mid-1;
        }
        int neg= l ;
        l = 0 ;
        r= n-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]<=0)
            l=mid+1;
            else
            r=mid-1;
        }
        int pos= n-l;
        return max(neg, pos);
    }
};
    