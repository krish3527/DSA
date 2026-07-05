    }
};*/
if(n==0){
     return 0;
}
unordered_set<int>st;
        return longest;
        }
         
int longest =1;
int count =0;
for(int i=0;i<n;i++){
     st.insert(nums[i]);
} 
for(auto it:st){
    if(st.find(it-1)==st.end()){
        count=1;
         int x= it;
    while(st.find(x+1)!=st.end()){
       x=x+1;
       count++;
    }
    longest = max(longest,count);
    }
}
return longest;}
};
     

