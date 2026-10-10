class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        long long k = (long long)k1+k2;
        vector<int>diff(n);
        long long total=0;
        for(int i = 0 ;i<n;i++){
            diff[i]=abs(nums1[i]-nums2[i]);
            total+=diff[i];
        }
        if(k>=total)
        return 0 ;
        sort(diff.rbegin(),diff.rend());
        diff.push_back(0);
        for(int i = 0 ;i<n;i++){
            long long count=i+1;
            long long level=diff[i]-diff[i+1];
            long long cost = count * level;

            if (k >= cost) {
                // Reduce the first i+1 differences to the next level
                k -= cost;
            } else {
                // Reduce them as evenly as possible
                long long reduction = k / count;
                long long remainder = k % count;

                long long high = diff[i] - reduction;
                long long low = high - 1;

                long long ans = 0;

                for (int j = 0; j <= i; j++) {
                    ans += (long long)low * low;
                }

                ans += (long long)(count - remainder) *
                       (high * high - low * low);

                for (int j = i + 1; j < n; j++) {
                    ans += (long long)diff[j] * diff[j];
                }

                return ans;
            }
        }

        return 0;
    }
};
