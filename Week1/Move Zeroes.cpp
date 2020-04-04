class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> tmp;
        int zeros = 0;
        for (auto v: nums) {
            if (v) tmp.push_back(v);
            else zeros++;
        }
        while(zeros--) tmp.push_back(0);
        nums = tmp;
    }
};