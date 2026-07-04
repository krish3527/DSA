class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i++){
         
        }
        return longest;
        sort(nums.begin(),nums.end());
        int countcur=0;
        int longest =1;
        int last_smallest = INT_MIN;
            else if(last_smallest!=nums[i]){
                 
            }
                last_smallest = nums[i];

            if(nums[i]-1==last_smallest){
                 countcur++;
            }
    }
                 last_smallest= nums[i];
            longest=max(countcur,longest);
                countcur=1;
};
