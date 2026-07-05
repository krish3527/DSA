# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

_Description not available._

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-07-05T06:33:45.923Z  

```cpp
    }
};*/
if(n==0){
     return 0;
}
unordered_set<int>st;
        return longest;
        }
         
int longest =1;
int count =0;
for(int i=0;i<n;i++){
     st.insert(nums[i]);
} 
for(auto it:st){
    if(st.find(it-1)==st.end()){
        count=1;
         int x= it;
    while(st.find(x+1)!=st.end()){
       x=x+1;
       count++;
    }
    longest = max(longest,count);
    }
}
return longest;}
};
     


```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)