class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
       /*/ //BETTER APPROACH 
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
};*/
if(n==0){
     return 0;
}
unordered_set<int>st;
int longest =1;
int count =0;
for(int i=0;i<n;i++){
     st.insert(nums[i]);
} 
for(auto it:st){
    if(st.find(it-1)==st.end()){
        count=1;
         int x= it;
    while(st.find(x+1)!=st.end()){
       x=x+1;
       count++;
    }
    longest = max(longest,count);
    }
}
return longest;}
};
     
