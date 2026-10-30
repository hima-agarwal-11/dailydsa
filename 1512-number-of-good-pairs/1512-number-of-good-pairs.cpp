// class Solution {
// public:
//     int numIdenticalPairs(vector<int>& nums) {
//         int cnt=0;
//         int n = nums.size();
//             for(int i = 0 ;i<n;i++){
//             for(int j = i+1 ;j<n;j++){
//                 if(nums[i] == nums[j] )
//                 cnt++;
//             }
//         }return cnt;
//     }
// };
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int cnt = 0;

        for (int i = 0; i < nums.size(); i++) {
            cnt += mp[nums[i]];
            mp[nums[i]]++;
        }

        return cnt;
    }
};
