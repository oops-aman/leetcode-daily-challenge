class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> freq(n + 1, 0);
        vector<int> res;
        for (auto i: nums) {
            freq[i]++;
        }
        for (int i = 1; i < n + 1; i++) {
            if (freq[i] > 1)
                res.push_back(i);
        }
        for (int i = 1; i < n + 1; i++) {
            if (freq[i] == 0)
                res.push_back(i);
        }
        return res;
    }
};