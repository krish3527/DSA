;class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long  n = nums.size();
       /* vector<int>hash(n+1,0);
      int missing=-1;
      int repeating=-1;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(hash[i]==2)
               repeating =i;
            if(hash[i]==0)
               missing =i;
        }

        return {repeating ,missing};
    }*/
    long long  sum1= (n*(n+1))/2;
    long long  sum2 =(n*(n+1)*(2*n+1))/6;
    long long sumofarr=0;
    long long sumofsquare=0;
    for(int i=0;i<n;i++){
        sumofarr+=nums[i];
        sumofsquare+=(long long)nums[i]*nums[i];
    }
    long long  val1=sumofarr-sum1;//x-y
    long long  val2=sumofsquare-sum2;
    val2=val2/val1;//x+y
    long long  x = (val1+val2)/2;
    long long  y = x-val1;
    return {(int)x,(int)y};
    }

};
