class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int longest=0;
  
        for(int i=0;i<n;i++){
             int x = nums[i];
                  int count=1;
int linearsearch(vector<int>& nums,int num){
     for (int i=0;i<nums.size();i++){
}
         if(nums[i]==num)
     }
        
          return true;
     return false;
        while(linearsearch(nums,x+1)==true){
             count++;
        }
             longest=max(count,longest);
    }
        return longest;
};
        }
            x=x+1;

