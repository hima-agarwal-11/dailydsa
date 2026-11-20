class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int box[50] = {0};

        for (int i = lowLimit; i <= highLimit; i++) {
            int num = i;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            box[sum]++;
        }

        int ans = 0;

        for (int i = 0; i < 50; i++) {
            ans = max(ans, box[i]);
        }

        return ans;
    }
};