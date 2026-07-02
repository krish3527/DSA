class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
         int num=nums[i];
         int num_required=target -num;
         if(mpp.find(num_required)!=mpp.end()){
           return {mpp[num_required],i};
         }
 mpp[num]=i;
    }
    return { };
    }

 
 
    };