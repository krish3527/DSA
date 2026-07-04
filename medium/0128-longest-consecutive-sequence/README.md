# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 
Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.


Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9


Example 3:

Input: nums = [1,0,1,2]
Output: 3


 
Constraints:


	0 <= nums.length <= 105
	-109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-07-04T10:58:31.156Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)