class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
     vector<int>st(n);
    for(int i=0;i<n;i++){
        st[i]=nums[i]*nums[i];
    }
    sort(st.begin(),st.end());
    return st;
    }
};