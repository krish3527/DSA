class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    /*long long arr3[m+n];
    int left =0;
    int right =0;
    int index=0;
    while(left<m&&right<n){
         if(nums1[left]<=nums2[right]){
             arr3[index]=nums1[left];
             index++;
             left++;
         }
         else {
             arr3[index]=nums2[right];
             index++;
             right++;
         }
    }
    while(left<m){
         arr3[index++]=nums1[left++];
    }
    while(right<n){
         arr3[index++]=nums2[right++];
    }
    for(int i=0;i<n+m;i++){
       nums1[i]=arr3[i];
    }

    }
};*/
int i = m-1;
int j = n-1;
int k = m+n-1;
while(i>=0&&j>=0){
     if(nums1[i]>nums2[j]){
         nums1[k]=nums1[i];
         i--;
     }
     else{
         nums1[k]= nums2[j];
         j--;

     }
     k--;
}
     while(j>=0){
         nums1[k]=nums2[j];
         j--;
         k--;
     }
    }
};
