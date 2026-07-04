class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int countcur=0;
        int longest =0;
        int last_smallest = INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==last_smallest){
                 countcur++;
                 last_smallest= nums[i];
            }
            else if(last_smallest!=nums[i]){
                countcur=1;
                last_smallest = nums[i];
                 
            }
            longest=max(countcur,longest);

         
        }
        return longest;
    }
};