class Solution {
public:
 /*int find(int r,int c){
     int result =1;
     for(int i=0;i<c;i++){
        result = result*(r-i);
        result = result/(i+1);

     }
     return result;
 }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>temp;
             for(int j=0;j<=i;j++){
                temp.push_back(find(i,j));
                 
             }
        
        ans.push_back(temp);
        }
        return ans;

    }
};*/
vector<int> generaterow(int row){
     long long ans=1;
     vector<int>ansrow;
     ansrow.push_back(1);
     for(int coln =1 ;coln<row;coln++){
         ans = ans *(row-coln);
         ans = ans /(coln);
         ansrow.push_back(ans);
     }
     return ansrow;
}
vector<vector<int>> generate(int numRows) {
    vector<vector<int>>finalanswer;
    for(int i =1;i<=numRows;i++){
         finalanswer.push_back(generaterow(i));
    }
    return finalanswer;
}
};