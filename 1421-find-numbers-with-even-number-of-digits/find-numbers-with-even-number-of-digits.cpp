class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count =0;
       /*for(int i=0;i<n;i++){
           if( to_string(nums[i]).length()%2==0)
        count++;
            }*/

        for(int i=0;i<n;i++){
              int x=nums[i];
              int digit = 0;
              while(x>0){
                 digit++;
                 x=x/10;
              }
              if(digit%2==0){
                 count++;
              }
        }
        
        
        return count;
        

    }
};