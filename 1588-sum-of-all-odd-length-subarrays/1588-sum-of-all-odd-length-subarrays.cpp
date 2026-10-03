class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum = 0;

        for(int i = 0; i < arr.size(); i++) {
            int curr = 0;

            for(int j = i; j < arr.size(); j++) {
                curr += arr[j];

                int len = j - i + 1;

                if(len % 2 == 1) {
                    sum += curr;
                }
            }
        }

        return sum;
    }
};