class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
   unordered_set<int>st(nums1.begin(),nums1.end());
    unordered_set<int>result;
    for(int i=0;i<nums2.size();i++){
         if(st.find(nums2[i])!=st.end())
          result.insert(nums2[i]);
    }
    vector<int>ans(result.begin(),result.end());
    return ans;
        

   
    }
};
