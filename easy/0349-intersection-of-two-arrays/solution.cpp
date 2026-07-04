class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
  for(int i=0;i<n1;i++){
             for(int j=0;j<n2;j++){
                 if(nums1[i]==nums2[j]){
                     if(inter.size()==0||inter.back()!=nums1[i]||inter.back()!=nums2[j]){
                         inter.push_back(nums1[i]);
                     }
                 }

             }
        }
        return inter;
    }
};