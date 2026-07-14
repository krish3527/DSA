class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
     map<int,int>mpp;
     int mini = n/3+1;
     for(int i=0;i<n;i++){
         mpp[nums[i]]++;
         if(mpp[nums[i]]==mini){
            ans.push_back(nums[i]);
             
         }
     }
     sort(ans.begin(),ans.end());
     return ans ;
    }
};