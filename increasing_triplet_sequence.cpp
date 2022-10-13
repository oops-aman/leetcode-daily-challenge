class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fMax = INT_MAX;
        int sMax = INT_MAX;
        for(int i: nums) {
            if(fMax >= i)
                fMax = i;
            else if(sMax >= i)
                sMax = i;
            else
                return true;
        }
        return false;
    }
};
