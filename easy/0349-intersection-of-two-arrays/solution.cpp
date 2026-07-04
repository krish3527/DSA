class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>inter;
        int n1 = nums1.size();
        int n2= nums2.size();
  for(int i=0;i<min(n1,n2);i++){
             for(int j=0;j<min(n1,n2);j++){
                 if(nums1[i]==nums2[j]){
                     if(inter.size()==0||inter.back()!=nums1[i]){
                         inter.push_back(nums1[i]);
                     }
                 }
              
                     
                 }

             }
        
        return inter;
    }
};