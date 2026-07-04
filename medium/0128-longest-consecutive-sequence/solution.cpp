class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int count = 0;
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] - nums[i] == -1) {
                count++;
            } else if (nums.empty())
                return 0;
        }

        return count+1;
    }
};