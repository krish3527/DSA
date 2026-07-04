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
