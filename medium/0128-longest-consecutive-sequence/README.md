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
**Memory:** 8.1 MB  
**Submitted:** 2026-07-04T16:18:38.186Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
         
        }
        return longest;
        sort(nums.begin(),nums.end());
        int countcur=0;
        int longest =1;
        int last_smallest = INT_MIN;
            else if(last_smallest!=nums[i]){
                 
            }
                last_smallest = nums[i];

            if(nums[i]-1==last_smallest){
                 countcur++;
            }
    }
                 last_smallest= nums[i];
            longest=max(countcur,longest);
                countcur=1;
};

```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)