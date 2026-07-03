class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =  nums.size();
        map<int,int>mpp;
    for(int i=0;i<n;i++){
        if(mpp[nums[i]]>0){
             return true ;
        }
         mpp[nums[i]]++;
    }
  return false;
    }
};
    