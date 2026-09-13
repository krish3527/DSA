class Solution {
public:
/*int lowerbound(vector<int>&nums,int target){
     int n = nums.size();
     int low =0, high = n-1;
     int ans =n;
     while(low<=high){
        int mid =(low+high)/2;
        if(nums[mid]>=target){
            ans = mid;
            high =mid-1;
        }
        else{
             low= mid+1;
        }

     }
     return ans;
}
int upperbound(vector<int>&nums,int target){
     int n = nums.size();
     int low =0, high = n-1;
     int ans =n;
     while(low<=high){
        int mid =(low+high)/2;
        if(nums[mid]>target){
            ans = mid;
            high =mid-1;
        }
        else{
             low= mid+1;
        }

     }
     return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lowerbound(nums,target);
        if(lb ==n || (nums[lb]!=target)) return {-1,-1};
        
            return { lb , upperbound(nums, target)-1};
    }
};*/
//SIMPLE BINARY SEARCH CODE 
int first(vector<int>&nums, int target){
     int n = nums.size();
     int low= 0, high = n-1, first =-1;
     while(low<=high){
         int mid= (low+high)/2;
         if(nums[mid]==target){
             first =mid;
             high = mid-1;
         }
         else if (nums[mid]<target){
             low = mid+1;
         }
         else{
            high = mid-1;
         }
         }
         return first;
     }
int last (vector<int>&nums,int target){
     int n = nums.size();
     int low =0, high = n-1, last =-1;
     while(low<=high){
         int mid = (low+high)/2;
         if(nums[mid]==target){
             last = mid;
             low = mid+1;
         }
         else if(nums[mid]<target){
             low = mid+1;
         }
         else{
             high = mid-1;
         }
         }
     return last;
}
 vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();      
    return {first(nums,target),last(nums,target)};
 }
};
              
    
