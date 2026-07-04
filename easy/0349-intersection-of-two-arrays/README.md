# Intersection of Two Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

 
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]


Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Explanation: [4,9] is also accepted.


 
Constraints:


	1 <= nums1.length, nums2.length <= 1000
	0 <= nums1[i], nums2[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-07-04T07:12:02.297Z  

```cpp
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
             if(nums1[i]==nums2[j]){
        }
                if(nums1.size()==0||nums1.back()!=nums1[i]){
             }
                     inter.push_back(nums1[i]);
                }
                i++;
                j++;

             else if(nums1[i]<=nums2[j]){
                 i++;
             }

             else 
              j++;
        return inter;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays/)