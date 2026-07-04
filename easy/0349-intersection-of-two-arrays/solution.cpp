class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       /* sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
        int i=0,j=0;
        while(i<n1&&j<n2){
             if(nums1[i]==nums2[j]){
                if(inter.size()==0||inter.back()!=nums1[i]){
                     inter.push_back(nums1[i]);
                }
                i++;
                j++;

             }
             else if(nums1[i]<nums2[j]){
                 i++;
             }
             else {
              j++;  // this  one haing nlogn+mlogn
             }
        }
        return inter;   //using set!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }*/
    unordered_set<int>st(nums1.begin(),nums1.end());
    unordered_set<int>result;
    for(int i=0;i<nums2.size();i++){
         if(st.find(nums2[i])!=st.end())
          result.insert(nums2[i]);
    }
    vector<int>ans(result.begin(),result.end());
    return ans;
    }

};