class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
      int mini= INT_MAX;
      int odd=0;
      for(int i = 0;i<nums1.size();i++){
        if(nums1[i]%2==1)
        odd++;
        mini=min(mini, nums1[i]);
      }
      if(odd==0)// all are even
      return true;
      if(mini%2==0)//min is even but odd esist 
      return false;
      //min is odd
      return true;
    }
};


       