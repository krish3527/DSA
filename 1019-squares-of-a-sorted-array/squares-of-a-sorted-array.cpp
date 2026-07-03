class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
    /* vector<int>st(n);
    for(int i=0;i<n;i++){
        st[i]=nums[i]*nums[i];
    }
    sort(st.begin(),st.end());
    return st;
    }//her TC IS O(nlogn) sc is o(n)
};*/
vector<int>temp(n);
int left =0;
int right =n-1;
int index =n-1;
while(left<=right){
     int leftsq=nums[left]*nums[left];
     int rightsq=nums[right]*nums[right];
     
if(leftsq>=rightsq){
    temp[index] =leftsq;;
    left++;
}
else{
   temp[index]=rightsq;
   right--;;
}
index--;
     
}
return temp;
    }
};

