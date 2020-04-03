class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] >= sum) {
                if (0 >= sum)
                    sum = nums[i];
                else
                    sum += nums[i];
            }
            else if (nums[i] <= -sum) {
                sum = nums[i];
            } else sum += nums[i];
            maxSum = max(maxSum, sum);
        }
        maxSum = max(maxSum, sum);
        return maxSum;
    }
};
