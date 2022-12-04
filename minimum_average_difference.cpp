class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();

        vector<long long> prefix(n, 0);
        for(int i = 0; i < n; i++) {
            prefix[i] = nums[i] + ((i == 0) ? 0 : prefix[i - 1]);
        }
        long long minDiff = INT_MAX, index = -1;
        for(int i = 0; i < n; i++) {
            long long sum1 = prefix[i], sum2 = prefix[n-1] - prefix[i];
            long long avg1 = sum1 / (long long) (i + 1);
            long long avg2 = ((i == n - 1) ? 0 : sum2 / (long long) (n - i - 1));

            long long diff = abs(avg1 - avg2);
            if(diff < minDiff) {
                index = i;
                minDiff = diff;
            }
        }
        return index;
    }
};