class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
       /*BETTER 
        int count =0;
      for(int i=0;i<n;i++){
        int sum =0;
         for(int j=i;j<n;j++){
            sum = sum+nums[j];
        
         
         if(sum==k){
             count++;
         }
         }
      }
      return count;
    }
};*/
//OPTIMAL APPROACH 
int sum=0;
int count =0;
map<int,int>mpp;
mpp[0]=1;
for(int i=0;i<n;i++){
    sum = sum+nums[i];
    int remove = sum-k;
    count +=mpp[remove];
    mpp[sum]+=1;
}
return count;
    }
};

