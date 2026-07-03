class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int s=nums.size();
        vector<int>temp1;
        vector<int>temp2;
        vector<int>set1;
        for(int i=0;i<n;i++){
            temp1.push_back(nums[i]);
        }
        for(int i=n;i<2*n;i++){
             temp2.push_back(nums[i]);;
        }
        int i =0;
        int s1=temp1.size();
        int s2=temp2.size();
        while(i<s1&&i<s2){
             set1.push_back(temp1[i]);
             set1.push_back(temp2[i]);
             i++;
        }
        while(i<s1){
         set1.push_back(temp1[i]);
         i++;
        }
        while(i<s2){
             set1.push_back(temp2[i]);
             i++;
        }
        return set1;

    }
};