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
**Memory:** 8.3 MB  
**Submitted:** 2026-07-04T14:45:06.414Z  

```cpp
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest=0;
  
        for(int i=0;i<n;i++){
             int x = nums[i];
                  int count=1;
int linearsearch(vector<int>& nums,int num){
     for (int i=0;i<nums.size();i++){
}
         if(nums[i]==num)
     }
        
          return true;
     return false;
        while(linearsearch(nums,x+1)==true){
             count++;
        }
             longest=max(count,longest);
    }
        return longest;
};
        }
            x=x+1;


```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)