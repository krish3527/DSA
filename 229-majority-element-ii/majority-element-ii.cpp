class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
    /*    vector<int>ans;
     map<int,int>mpp;
     int mini = n/3+1;
     for(int i=0;i<n;i++){
         mpp[nums[i]]++;
         if(mpp[nums[i]]==mini){
            ans.push_back(nums[i]);
             
         }
     }
     return ans ;
    }
};*/
int count1=0,count2=0;
int el1=0,el2=0;
for(int i=0;i<n;i++){
     if(count1==0&&nums[i]!=el2){
         count1=1;
         el1=nums[i];
     }
     else if(count2==0&&nums[i]!=el1){
         count2=1;
         el2=nums[i];
     }
     else if(el1==nums[i]) count1++;
     else if(el2==nums[i]) count2++;
     else{ 
     count1--;
     count2--;
     }
}
int c1=0,c2=0;
for(int i=0;i<n;i++){
     if(el1==nums[i])c1++;
     else if(el2==nums[i])c2++;
}
int mini = (int)(n/3)+1;
vector<int>ans;
if(c1>=mini)
 ans.push_back(el1);
 if(c2>=mini)
  ans.push_back(el2);
  return ans;
    }
};