class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num = 0;
        for (auto v: nums) {
            num ^= v;
        }
        return num;
    }
};
