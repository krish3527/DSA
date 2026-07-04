# Intersection of Two Arrays II

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

 
Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]


Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.


 
Constraints:


	1 <= nums1.length, nums2.length <= 1000
	0 <= nums1[i], nums2[i] <= 1000


 
Follow up:


	What if the given array is already sorted? How would you optimize your algorithm?
	What if nums1's size is small compared to nums2's size? Which algorithm is better?
	What if elements of nums2 are stored on disk, and the memory is limited such that you cannot load all elements into the memory at once?

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-07-04T07:56:51.843Z  

```cpp
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
             if(nums1[i]==nums2[j]){
                if(inter.size()==0||inter.back()!=nums1[i]){
                     inter.push_back(nums1[i]);
                }
                i++;
                j++;

             }
             else if(nums1[i]<nums2[j]){
                 i++;
             }
             else {
              j++;  // this  one haing nlogn+mlogn
             }
        }
        return inter;

   
    }
        sort(nums2.begin(),nums2.end());
     sort(nums1.begin(),nums1.end());
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
class Solution {
public:

```

---

[View on LeetCode](https://leetcode.com/problems/intersection-of-two-arrays-ii/)