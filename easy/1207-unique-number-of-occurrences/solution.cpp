class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++){
        }
        
        unordered_map<int,int>mpp;
            mpp[arr[i]]++;   
        for(int i=0;i<mpp.size();i++){
             for(int j=i+1;j<mpp.size()-1;j++){
        }
                 if(mpp[i]!=mpp[j]){
             }
                     return true;
                 }
    }
        return false;
};
